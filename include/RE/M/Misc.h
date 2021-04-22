#pragma once

#include "RE/B/BGSEntryPoint.h"

namespace RE
{
	class Actor;
	template <class T>
	class NiPointer;
	class Setting;
	class TESObjectREFR;
	class TESForm;
	class InventoryEntryData;

	void	 ApplyPerkEntries(BGSEntryPoint::ENTRY_POINT a_perkEntryCode, Actor* a_perkOwner, void* a_argument1, void* a_argument2 = nullptr, void* a_argument3 = nullptr);
	void	 CreateRefHandle(RefHandle& a_handleOut, TESObjectREFR* a_refrTo);
	void	 DebugNotification(const char* a_notification, const char* a_soundToPlay = 0, bool a_cancelIfAlreadyQueued = true);
	float	 GetArmorFinalRating(InventoryEntryData* a_entryData, float a_armorPerks, float a_skillMultiplier);
	Setting* GetINISetting(const char* a_name);
	bool	 LookupReferenceByHandle(const RefHandle& a_handle, NiPointer<Actor>& a_refrOut);
	bool	 LookupReferenceByHandle(const RefHandle& a_handle, NiPointer<TESObjectREFR>& a_refrOut);
	void	 PlaySound(const char* a_editorID);
}
