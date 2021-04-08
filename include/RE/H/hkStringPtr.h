#pragma once

namespace RE
{
	class hkStringPtr
	{
	public:
		// member types
		using size_type = std::int32_t;

		// members access
		const char* data() const noexcept;
		const char* c_str() const noexcept;

		// capacity
		[[nodiscard]] bool empty() const noexcept;
		size_type          size() const;
		size_type          length() const;

	protected:
		enum
		{
			kManaged = 1 << 0
		};

		const char* _data;  // 0
	};
	static_assert(sizeof(hkStringPtr) == 0x8);
}
