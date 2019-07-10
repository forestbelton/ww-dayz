#include "Gun.c"

class Gun_SK : Gun {
	override string GetName() {
		return "SKS_Black";
	}

	override TStringArray GetAttachments() {
		return {"PUScopeOptic"};
	}

	override string GetAmmoName() {
		return "Ammo_762x39";
	}
}