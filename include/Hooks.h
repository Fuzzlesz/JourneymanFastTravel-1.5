#pragma once

#include "FastTravelManager.h"

namespace Hooks
{
	inline static REL::Relocation<std::uintptr_t> Can_Fast_Travel_Map_Hook{ REL::ID(52208), 0x2C5 };		//VERIFIED
	inline static REL::Relocation<std::uintptr_t> Papyrus_Fast_Travel_Hook{ REL::ID(54824), 0xA1 };			//VERIFIED

	inline bool Install() {
		if (!FastTravelManager::InstallCanFastTravelCheck()) {
			return false;
		}
		if (!FastTravelManager::InstallPapyrusFastTravelCheck()) {
			return false;
		}
		return true;
	}
}