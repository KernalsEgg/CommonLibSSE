#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSString.h"
#include "RE/B/BSTArray.h"
#include "RE/C/CraftingSubMenu.h"
#include "RE/E/Effect.h"
#include "RE/F/FormTypes.h"
#include "RE/G/GFxValue.h"
#include "RE/I/IMessageBoxCallback.h"
#include "RE/M/MagicItemTraversalFunctor.h"

namespace RE
{
	class EnchantmentItem;
	class TESBoundObject;

	namespace CraftingSubMenus
	{
		class EnchantConstructMenu : public CraftingSubMenu
		{
		public:
			inline static constexpr auto RTTI = RTTI_CraftingSubMenus__EnchantConstructMenu;

			class CategoryListEntry : public BSIntrusiveRefCounted
			{
			public:
				enum FilterFlag : std::uint32_t
				{
					kEffectWeapon = 1 << 4,
					kEffectArmor = 1 << 5
				};

				virtual ~CategoryListEntry();  // 00

				// add
				virtual void Unk_01(void) = 0;	// 01
				virtual void Unk_02(void) = 0;	// 02
				virtual void Unk_03(void) = 0;	// 03
				virtual void Unk_04(void) = 0;	// 04

				// members
				stl::enumeration<FilterFlag, std::uint32_t> filterFlag;	 // 0C
				bool										equipped;	 // 10
				bool										enabled;	 // 11
				std::uint16_t								pad12;		 // 12
				std::uint32_t								pad14;		 // 14
			};
			static_assert(sizeof(CategoryListEntry) == 0x18);

			class EnchantmentEntry : public CategoryListEntry
			{
			public:
				// members
				EnchantmentItem* enchantment;
				float			 power;
				float			 maximumPower;
			};
			static_assert(sizeof(EnchantmentEntry) == 0x28);

			class CreateEffectFunctor : public MagicItemTraversalFunctor
			{
			public:
				virtual ~CreateEffectFunctor();	 // 00

				// override
				virtual std::uint32_t TraverseEffect(Effect* a_source) override;  // 01

				// members
				BSTArray<Effect>  effects;			 // 10
				Effect*			  costliestEffect;	 // 28
				EnchantmentEntry* enchantmentEntry;	 // 30
				EnchantmentItem*  enchantment;		 // 38
				FormType		  formType;			 // 40
				std::uint32_t	  pad44;			 // 44
				TESBoundObject*	  item;				 // 48
				float			  powerMultiplier;	 // 50
				std::uint32_t	  pad54;			 // 54
			};
			static_assert(sizeof(CreateEffectFunctor) == 0x58);

			class EnchantMenuCallback : public IMessageBoxCallback
			{
			public:
				inline static constexpr auto RTTI = RTTI_CraftingSubMenus__EnchantConstructMenu__EnchantMenuCallback;

				virtual ~EnchantMenuCallback();  // 00

				// members
				EnchantConstructMenu* subMenu;  // 10
			};
			static_assert(sizeof(EnchantMenuCallback) == 0x18);

			class EnchantMenuDisenchantCallback : public EnchantMenuCallback
			{
			public:
				inline static constexpr auto RTTI = RTTI_CraftingSubMenus__EnchantConstructMenu__EnchantMenuDisenchantCallback;

				virtual ~EnchantMenuDisenchantCallback();  // 00

				// override (EnchantMenuCallback)
				virtual void Run(Message a_msg) override;  // 01
			};
			static_assert(sizeof(EnchantMenuDisenchantCallback) == 0x18);

			class EnchantMenuCraftCallback : public EnchantMenuCallback
			{
			public:
				inline static constexpr auto RTTI = RTTI_CraftingSubMenus__EnchantConstructMenu__EnchantMenuCraftCallback;

				virtual ~EnchantMenuCraftCallback();  // 00

				// override (EnchantMenuCallback)
				virtual void Run(Message a_msg) override;  // 01
			};
			static_assert(sizeof(EnchantMenuCraftCallback) == 0x18);

			class EnchantMenuExitCallback : public EnchantMenuCallback
			{
			public:
				inline static constexpr auto RTTI = RTTI_CraftingSubMenus__EnchantConstructMenu__EnchantMenuExitCallback;

				virtual ~EnchantMenuExitCallback();  // 00

				// override (EnchantMenuCallback)
				virtual void Run(Message a_msg) override;  // 01
			};
			static_assert(sizeof(EnchantMenuExitCallback) == 0x18);

			virtual ~EnchantConstructMenu();  // 00

			// override (CraftingSubMenu)
			virtual void Accept(CallbackProcessor* a_cbReg) override;  // 01
			virtual void Unk_04(void) override;                        // 04 - { return unk20C != 3 || unk1A0; }
			virtual void Unk_05(void) override;                        // 05
			virtual void Unk_07(void) override;                        // 07

			// members
			std::uint64_t			   unk100;				 // 100
			std::uint64_t			   unk108;				 // 108
			std::uint64_t			   unk110;				 // 110
			std::uint64_t			   unk118;				 // 118
			std::uint64_t			   unk120;				 // 120
			std::uint64_t			   unk128;				 // 128
			BSString				   unk130;				 // 130
			GFxValue				   unk140;				 // 140
			GFxValue				   unk158;				 // 158
			std::uint64_t			   unk170;				 // 170
			std::uint64_t			   unk178;				 // 178
			BSTArray<EnchantmentEntry> enchantments;		 // 180
			std::uint64_t			   unk198;				 // 198
			std::uint64_t			   unk1A0;				 // 1A0
			CreateEffectFunctor		   createEffectFunctor;	 // 1A8
			std::uint64_t			   unk200;				 // 200
			std::uint32_t			   unk208;				 // 208
			std::uint32_t			   unk20C;				 // 20C
			std::uint64_t			   unk210;				 // 210
			std::uint64_t			   unk218;				 // 218
		};
		static_assert(sizeof(EnchantConstructMenu) == 0x220);
	}
}
