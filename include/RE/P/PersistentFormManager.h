#pragma once

#include "RE/B/BSTArray.h"
#include "RE/E/Effect.h"

namespace RE
{
	class EnchantmentItem;

	class PersistentFormManager
	{
	public:
		struct Enchantment
		{
			EnchantmentItem*	   enchantment;	 // 0
			volatile std::uint32_t refCount;	 // 8
			std::uint32_t		   padC;		 // C
		};
		static_assert(sizeof(Enchantment) == 0x10);

		struct Unknown
		{
			void*		  unk00;  // 00
			std::uint64_t unk08;  // 08
			void*		  unk10;  // 10
			std::uint64_t unk18;  // 18
			std::uint32_t unk20;  // 20
			std::uint32_t unk24;  // 24
			std::uint32_t unk28;  // 28
			std::uint32_t unk2C;  // 2C
		};
		static_assert(sizeof(Unknown) == 0x30);

		static PersistentFormManager* GetSingleton()
		{
			REL::Relocation<PersistentFormManager**> singleton{ REL::ID(514172) };
			return *singleton;
		}

		EnchantmentItem* CreateArmorEnchantment(BSTArray<Effect>* a_source)
		{
			using func_t = decltype(&PersistentFormManager::CreateArmorEnchantment);
			REL::Relocation<func_t> func{ REL::ID(35264) };
			return func(this, a_source);
		}

		EnchantmentItem* CreateWeaponEnchantment(BSTArray<Effect>* a_source)
		{
			using func_t = decltype(&PersistentFormManager::CreateWeaponEnchantment);
			REL::Relocation<func_t> func{ REL::ID(35263) };
			return func(this, a_source);
		}

		std::uint64_t		  unk00;			   // 00
		BSTArray<Enchantment> weaponEnchantments;  // 08
		BSTArray<Enchantment> armorEnchantments;   // 20
		std::uint64_t		  unk38;			   // 38
		std::uint32_t		  unk40;			   // 40
		std::uint32_t		  unk44;			   // 44
		std::uint32_t		  unk48;			   // 48
		std::uint32_t		  unk4C;			   // 4C
		Unknown				  unk50;			   // 50
		Unknown				  unk80;			   // 80
		void*				  unkB0;			   // B0
		std::uint64_t		  unkB8;			   // B8
		std::uint64_t		  unkC0;			   // C0
		mutable BSSpinLock	  spinLock;			   // C8
	};
	static_assert(sizeof(PersistentFormManager) == 0xD0);
}
