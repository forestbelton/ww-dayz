#include "GunData.c"

class Gun {
    string GetName() {
        return "";
    }

    string GetAmmoName() {
        return "";
    }

    array<string> GetAttachments() {
        return {};
    }

    GunData Create(PlayerBase player, bool createInHands) {
        EntityAI gun;
        string name = GetName();

        if (createInHands) {
        gun = player.GetInventory().CreateInHands(name);
        } else {
            gun = player.GetInventory().CreateInInventory(name);
        }

        array<string> attachments = GetAttachments();
        for (int i = 0; i < attachments.Count(); ++i) {
            gun.GetInventory().CreateAttachment(attachments[i]);
        }

        EntityAI ammo = player.GetInventory().CreateInInventory(GetAmmoName());
        return new GunData(gun, ammo);
    }
}
