#include "RE/E/Effect.h"

#include "RE/E/EffectSetting.h"

namespace RE
{
	Effect::EffectItem::EffectItem() :
		magnitude(0.0),
		area(0),
		duration(0)
	{}

	Effect::Effect() :
		effectItem(),
		pad0C(0),
		baseEffect(nullptr),
		cost(0.0),
		pad1C(0),
		conditions()
	{}

	std::uint32_t Effect::GetDuration() const
	{
		return (this->baseEffect->data.flags & EffectSetting::EffectSettingData::Flag::kNoDuration) ? 0 : this->effectItem.duration;
	}

	float Effect::GetMagnitude() const
	{
		return (this->baseEffect->data.flags & EffectSetting::EffectSettingData::Flag::kNoMagnitude) ? 0.0F : this->effectItem.magnitude;
	}

	void Effect::SetCost()
	{
		using func_t = decltype(&Effect::SetCost);
		REL::Relocation<func_t> func{ REL::ID(10932) };
		func(this);
	}

	bool Effect::SetDuration(std::uint32_t a_duration)
	{
		if ((this->baseEffect->data.flags & EffectSetting::EffectSettingData::Flag::kNoDuration) || (a_duration < 0)) {
			return false;
		}

		this->effectItem.duration = a_duration;
		this->SetCost();
		return true;
	}

	bool Effect::SetMagnitude(float a_magnitude)
	{
		if ((this->baseEffect->data.flags & EffectSetting::EffectSettingData::Flag::kNoMagnitude) || (a_magnitude < 0.0F)) {
			return false;
		}

		this->effectItem.magnitude = a_magnitude;
		this->SetCost();
		return true;
	}
}
