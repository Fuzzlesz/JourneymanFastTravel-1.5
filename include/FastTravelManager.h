#pragma once

class FastTravelManager
{
public:
	
	static bool InstallCanFastTravelCheck();
	static bool InstallPapyrusFastTravelCheck();

	static bool IsOnFlyingMount(RE::Actor* a_actor)
	{
		using func_t = decltype(&FastTravelManager::IsOnFlyingMount);
		static REL::Relocation<func_t> func{ REL::ID(36877) };					//VERIFIED
		return func(a_actor);
	}

	static bool CanFastTravel(RE::Actor* a_actor, bool a_arg2)
	{
		using func_t = decltype(&FastTravelManager::CanFastTravel);
		static REL::Relocation<func_t> func{ REL::ID(39372) };					//VERIFIED
		return func(a_actor, a_arg2);
	}

	static bool IsFastTravelEnabled()
	{
		using func_t = decltype(&FastTravelManager::IsFastTravelEnabled);
		REL::Relocation<func_t> func{ REL::ID(54848) };							//VERIFIED
		return func();
	}

	static void EnableFastTravel(bool a_enable)
	{
		using func_t = decltype(&FastTravelManager::EnableFastTravel);
		REL::Relocation<func_t> func{ REL::ID(54946) };							//VERIFIED
		return func(a_enable);
	}

	inline static RE::TESWorldSpace* GetWorldSpaceHook(RE::TESObjectREFR* a1);
	inline static REL::Relocation<decltype(GetWorldSpaceHook)> _GetWorldSpaceHook;
	inline static bool CanFastTravelMap(RE::Actor* actor, bool a_bool);
	inline static REL::Relocation<decltype(CanFastTravelMap)> _CanFastTravelMap;

};