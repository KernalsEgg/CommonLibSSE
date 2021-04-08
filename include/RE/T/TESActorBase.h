#pragma once

#include "RE/A/ActorValueOwner.h"
#include "RE/B/BGSAttackDataForm.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSKeywordForm.h"
#include "RE/B/BGSPerkRankArray.h"
#include "RE/B/BGSSkinForm.h"
#include "RE/F/FormTypes.h"
#include "RE/T/TESAIForm.h"
#include "RE/T/TESActorBaseData.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESContainer.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESSpellList.h"

namespace RE
{
	class TESActorBase :
		public TESBoundAnimObject,         // 000
		public TESActorBaseData,           // 030
		public TESContainer,               // 088
		public TESSpellList,               // 0A0
		public TESAIForm,                  // 0B0
		public TESFullName,                // 0D8
		public ActorValueOwner,            // 0E8
		public BGSDestructibleObjectForm,  // 0F0
		public BGSSkinForm,                // 100
		public BGSKeywordForm,             // 110
		public BGSAttackDataForm,          // 128
		public BGSPerkRankArray            // 138
	{
	public:
		inline static constexpr auto RTTI = RTTI_TESActorBase;

		virtual ~TESActorBase();  // 00

		// override (TESBoundAnimObject)
		virtual bool AddChange(std::uint32_t a_changeFlags) override;     // 0A
		virtual void RemoveChange(std::uint32_t a_changeFlags) override;  // 0B
		virtual void SaveGame(BGSSaveFormBuffer* a_buf) override;         // 0E
		virtual void LoadGame(BGSLoadFormBuffer* a_buf) override;         // 0F
		virtual bool IsAutoCalc() const override;                         // 3E - { return formType == FormType::NPC && (TESActorBaseData::flags >> 4) & 1; }
		virtual void SetAutoCalc(bool a_autoCalc) override;               // 3F

		// override (TESAIForm)
		virtual float GetActorValue(ActorValue a_akValue) override;                                                      // 01
		virtual float GetPermanentActorValue(ActorValue a_akValue) override;                                             // 02
		virtual float GetBaseActorValue(ActorValue a_akValue) override;                                                  // 03
		virtual void  SetBaseActorValue(ActorValue a_akValue, float a_value) override;                                   // 04
		virtual void  ModActorValue(ActorValue a_akValue, float a_value) override;                                       // 05
		virtual void  RestoreActorValue(ACTOR_VALUE_MODIFIER a_modifier, ActorValue a_akValue, float a_value) override;  // 06
		virtual void  SetActorValue(ActorValue a_akValue, float a_value) override;                                       // 07
		virtual bool  GetIsPlayerOwner() const override;                                                                 // 08

		// add
		virtual bool            GetHasPLSpecTex() const;                        // 53 - { return false; }
		virtual TESCombatStyle* GetCombatStyle();                               // 54 - { return 0; }
		virtual void            SetCombatStyle(TESCombatStyle* a_combatStyle);  // 55 - { return; }
		virtual TESForm*        GetAsForm();                                    // 56 - { return this; }
	};
	static_assert(sizeof(TESActorBase) == 0x150);
}
