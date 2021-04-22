#pragma once

namespace RE
{
	struct Effect;

	class MagicItemTraversalFunctor
	{
	public:
		virtual ~MagicItemTraversalFunctor();  // 00

		// add
		virtual std::uint32_t TraverseEffect(Effect* a_source) = 0;	 // 01

		// members
		std::uint64_t unk8;	 // 8
	};
	static_assert(sizeof(MagicItemTraversalFunctor) == 0x10);
}
