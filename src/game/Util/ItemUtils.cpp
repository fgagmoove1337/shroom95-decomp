#include "macros.h"
#include "ItemUtils.hpp"
#include "asm_helper.h"

NAKED int GetWeaponType(int itemId) {
    _RASM_PLACEHOLDER(0x406410)
}

bool is_wildhunter_jaguar_vehicle(int nVehicleID) {
    std::array<int, 6> RIDING_WILDHUNTER_JAGUAR = {
            1932015,
            1932030,
            1932031,
            1932032,
            1932033,
            1932036

    };

    return std::find(RIDING_WILDHUNTER_JAGUAR.begin(), RIDING_WILDHUNTER_JAGUAR.end(), nVehicleID) !=
           RIDING_WILDHUNTER_JAGUAR.end();
}

bool is_wildhunter_jaguar_vehicle_0(int nVehicleID) {
    std::array RIDING_WILDHUNTER_JAGUAR_0 = {
        0,
        1932015,
        1932030,
        1932031,
        1932032,
        1932033,
        1932036

};

    return std::find(RIDING_WILDHUNTER_JAGUAR_0.begin(), RIDING_WILDHUNTER_JAGUAR_0.end(), nVehicleID) !=
           RIDING_WILDHUNTER_JAGUAR_0.end();
}

bool is_random_box_item(int itemId) {
    if ((((itemId != 0x4fae70) && (itemId != 0x4fa6b0)) && (itemId != 0x4fa6b1)) &&
        (itemId != 0x4fa6b2)) {
        return false;
    }
    return true;
}

bool is_changemaplepoint_item(int itemId) {
    if ((itemId != 0x4f5889) && (itemId != 0x4f588a)) {
        return false;
    }
    return true;
}

bool is_event_vehicle_type1(long itemId) {
    if ((0x1d7ae0 < itemId) && (itemId < 0x1d7ae3)) {
        return true;
    }
    return false;
}

bool is_entrustedshop_item(int itemId) {
    if ((itemId / 10000 != 0x202) && (itemId / 10000 != 0x1f7)) {
        return false;
    }
    return true;
}

bool is_pigmy_egg(int itemId) {
    return itemId / 10000 == 0x1a1;
}

bool is_wedding_ring_item(int itemId) {
    if ((((itemId != 0x10fae3) && (itemId != 0x10fae6)) && (itemId != 0x10fae7)) &&
        (itemId != 0x10fae9)) {
        return false;
    }
    return true;
}

bool is_wedding_receipt_item(int itemId) {
    if ((((itemId != 0x3d83f9) && (itemId != 0x3d8390)) && (itemId != 0x3d83f8)) &&
        (itemId != 0x3d838f)) {
        return false;
    }
    return true;
}

bool is_treat_singly_0(int itemId) {
    int iVar1;

    iVar1 = itemId / 1000000;
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) &&
        ((itemId / 10000 != 0xcf && (itemId / 10000 != 0xe9)))) {
        return false;
    }
    return true;
}

bool is_skill_effect_weapon(int itemId) {
    return itemId / 100000 == 0x10;
}

bool is_wedding_cantdrop_item(int itemId) {
    if ((itemId != 0x3d838d) && (itemId != 0x3d838e)) {
        return false;
    }
    return true;
}

bool is_itemoption_upgrade_item(int itemId) {
    return itemId / 100 == 0x500e;
}

bool is_shield(int itemId) {
    return itemId / 10000 == 0x6d;
}

bool is_hyper_upgrade_item(int itemId) {
    return itemId / 100 == 0x500d;
}

bool is_invitation_guest_item(int itemId) {
    if ((itemId != 0x3d83ae) && (itemId != 0x3d83af)) {
        return false;
    }
    return true;
}

bool is_mobsummon_item(int itemId) {
    return itemId / 10000 == 0xd2;
}

bool is_ui_open_item(int itemId) {
    return itemId / 10000 == 0x1b0;
}

int to_pet_ring_bodypart(int idx, int itemId) {
    //004ff098 TODO
    /*
     * auto ix = nItemID != 1832000 ? 1 + (nIdx * 2) : (nIdx * 2);
     * return g_anPetRingBodyPart[ix];
     */
    return 0; // TODO
}

bool is_pet_equip_item_idx(int idx) {
    if ((idx != 0xe) && ((idx < 0x15 || (0x30 < idx)))) {
        return false;
    }
    return true;
}

bool is_pet_equip_item(int itemId) {
    return itemId / 100000 == 0x12;
}

bool is_engagement_ring_item(int itemId) {
    if (((((itemId != 0x3d837d) && (itemId != 0x3d837e)) && (itemId != 0x3d837f)) &&
         ((itemId != 0x3d8380 && (itemId != 0x3d8381)))) &&
        ((itemId != 0x3d8382 && ((itemId != 0x3d8383 && (itemId != 0x3d8384)))))) {
        return false;
    }
    return true;
}

bool is_weapon_ti(int wt) {
    if ((wt != 4) && (wt != 5)) {
        return false;
    }
    return true;
}

int get_cashslot_item_type(int itemId) {
    switch (itemId / 10000) {
        case 500:
            return 8;
        case 0x1f5:
            return 9;
        case 0x1f6:
            return 10;
        case 0x1f7:
            return 0xb;
        case 0x1f8:
            return 0x16;
        case 0x1f9:
            if (itemId % 10 == 0) {
                return 0x17;
            }
            return (-(8 < itemId % 10 - 1U) & 0xffffffe8) + 0x18;
        case 0x1fa:
            if (itemId / 1000 == 0x13c5) {
                return 0x41;
            }
            if (itemId / 1000 == 0x13c6) {
                return 0x4a;
            }
            switch (itemId % 10) {
                case 0:
                    return 0x19;
                case 1:
                    return 0x1a;
                case 2:
                case 3:
                    return 0x1b;
            }
            break;
        case 0x1fb:
            switch ((itemId % 10000) / 1000) {
                case 1:
                    return 0xc;
                case 2:
                    return 0xd;
                case 4:
                    return 0x2d;
                case 5:
                    switch (itemId % 10) {
                        case 0:
                            return 0x2f;
                        case 1:
                            return 0x30;
                        case 2:
                            return 0x31;
                        case 3:
                            return 0x32;
                        case 4:
                            return 0x33;
                        case 5:
                            return 0x34;
                    }
                case 6:
                    return 0xe;
                case 7:
                    return 0x3d;
                case 8:
                    return 0xf;
            }
            break;
        case 0x1fc:
            return 0x12;
        case 0x1fd:
            return 0x15;
        case 0x1fe:
            return 0x14;
        case 0x200:
            return 0x10;
        case 0x201:
            return 7;
        case 0x202:
            return 4;
        case 0x203:
            switch (itemId / 1000) {
                case 0x141e:
                case 0x141f:
                case 0x1422:
                    return 1;
                case 0x1420:
                    if (itemId / 100 == 0xc940) {
                        return 2;
                    }
                    if (itemId / 100 == 0xc941) {
                        return 0x23;
                    }
                    break;
                case 0x1421:
                    return 3;
            }
            break;
        case 0x204:
            return 6;
        case 0x205:
            return (-(itemId % 10000 != 0) & 0xffffffef) + 0x11;
        case 0x206:
            return 5;
        case 0x207:
            return 0x1c;
        case 0x208:
            return 0x13;
        case 0x20a:
            return 0x28;
        case 0x20b:
            return 0x1d;
        case 0x20c:
            return 0x1e;
        case 0x20d:
            return 0x25 - (itemId % 0x501fb8 != 100);
        case 0x210:
            if (itemId / 1000 == 0x14a0) {
                return 0x21;
            }
            if (itemId / 1000 == 0x14a1) {
                return 0x22;
            }
            break;
        case 0x212:
            return 0x29;
        case 0x215:
            return 0x1f;
        case 0x219:
            return 0x20;
        case 0x21a:
            return 0x2a;
        case 0x21b:
            return 0x2b;
        case 0x21c:
            if (itemId / 1000 == 0x1518) {
                return 0x35;
            }
            if (itemId / 1000 == 0x1519) {
                return 0x36;
            }
        case 0x21e:
            if (itemId / 1000 == 0x152c) {
                return 0x37;
            }
        case 0x21f:
            if (1 < itemId / 1000 - 0x1537U) {
                return 0x3a;
            }
            return 0x42;
        case 0x221:
            return (-(itemId / 1000 != 0x154b) & 0xffffffea) + 0x3c;
        case 0x222:
            return 0x3a;
        case 0x223:
            return 0x27;
        case 0x225:
            return 0x3b;
        case 0x226:
            return 0x3e;
        case 0x227:
            return 0x3f;
        case 0x228:
            return 0x40;
        case 0x229:
            return 0x48;
        case 0x22d:
            return 0x43;
        case 0x231:
            return 0x47;
        case 0x232:
            return 0x49;
        case 0x234:
            return 0x4d;
        case 0x236:
            return 0x4e;
    }
    return 0;
}

int get_etc_cash_item_type(int itemId) {
    long lVar1{};

    lVar1 = get_cashslot_item_type(itemId);
    switch (lVar1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 0x24:
        case 0x25:
        case 0x28:
        case 0x2a:
        case 0x2e:
        case 0x37:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3f:
        case 0x4d:
            break;
        default:
            lVar1 = 0;
    }
    return lVar1;
}

bool is_non_cash_effect_item(int itemId) {
    return (itemId / 0x2710) == 0x1ad;
}

bool is_only_for_prepaid_card_cash_items(int itemId) {
    if ((((itemId != 5400000) && (itemId != 0x5269a8)) &&
         ((itemId / 10 != 520000 || ((itemId == 0x4f5889 || (itemId == 0x4f588a)))))) &&
        ((itemId / 10000 != 0x225 && (itemId != 0x4faa89)))) {
        return false;
    }
    return true;
}

bool is_rechargeable_item(int itemId) {
    if ((itemId / 10000 != 0xcf) && (itemId / 10000 != 0xe9)) {
        return false;
    }
    return true;
}

ZXString<char> get_weapon_attack_speed(int itemId) {
    UNIMPLEMENTED;
}

int get_tab_from_item_typeindex(int typeIndex) {
    if (4 < typeIndex - 1U) {
        return -1;
    }
    if (typeIndex == 3) {
        return 3;
    }
    if (typeIndex == 4) {
        typeIndex = 3;
    }
    return typeIndex - 1;
}

ZXString<char> get_item_category_name(int itemId) {
    // TODO
    UNIMPLEMENTED;
}

bool is_petabil_item(int itemId) {
    return itemId / 10000 == 0xb5;
}

bool is_charslot_inc_item(int itemId) {
    return itemId / 1000 == 0x1536;
}

int to_pet_index_from_pet_ability_item_index(int itemId) {
    switch (itemId) {
        default:
            return 0;
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x2f:
            return 1;
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x30:
            return 2;
    }
}

bool is_dual_masterybook_item(int itemId) {
    if ((((itemId / 10000 == 0x232) && (itemId != 0x55c126)) && (itemId != 0x55c127)) &&
        (itemId != 0x55c128)) {
        return true;
    }
    return false;
}

int get_gender_from_id(int itemId) {
    if (itemId / 1000000 == 1) {
        switch ((itemId / 1000) % 10) {
            case 0:
                return 0;
            case 1:
                return 1;
        }
    }
    return 2;
}

bool is_slot_inc_item(int itemId) {
    if ((((itemId / 10000 != 0x38f) && (itemId / 1000 != 0x1536)) && (itemId != 0x52ded8)) &&
        (itemId != 0x52e2c0)) {
        return false;
    }
    return true;
}

bool is_matched_itemid_gender(int itemId, int charGender) {
    auto gender = get_gender_from_id(itemId);
    return gender == 2 || gender == charGender;
}

bool is_equipslot_ext_item(int itemId) {
    return (itemId / 0x2710) == 0x22b;
}

bool is_cash_package_item(int itemId) {
    return (itemId / 0x2710) == 0x38e;
}

int get_item_slottype_from_id(int itemId) {
    switch (itemId / 1000000) {
        case 1:
            return 1;
        case 2:
        case 3:
        case 4:
            return 2;
        case 5:
            return 3 - (itemId / 10000 != 500);
        default:
            return 0;
    }
}

bool is_petring_item(int itemId) {
    return itemId == 1822000 || itemId == 1832000;
}

bool is_antimacro_item(int itemId) {
    return itemId / 10000 == 219;
}

int is_new_year_card_item_etc(int itemId) {
    return itemId / 10000 == 0x1ae;
}

bool is_pet_ability_item(int itemId) {
    return itemId / 10000 == 0xb5;
}

int get_bundle_cash_item_type(int itemId) {
    int lVar1;

    lVar1 = get_cashslot_item_type(itemId);
    if ((lVar1 < 8) || ((0xb < lVar1 && (lVar1 != 0x27)))) {
        lVar1 = 0;
    }
    return lVar1;
}

bool is_evan_dragon_riding_item(int itemId) {
    return (itemId == 1902040) || (itemId == 1902041) || (itemId == 1902042);
}

bool is_gachapon_box_item(int itemId) {
    return itemId / 10000 == 0x1ac;
}

bool is_new_year_card_item_con(int itemId) {
    return itemId / 10000 == 0xd8;
}

bool is_portal_scroll_item(int itemId) {
    return itemId / 10000 == 0xcb;
}

bool is_engagement_ring_box_item(int itemId) {
    return itemId / 10000 == 0xe0;
}

bool is_script_run_item(int itemId) {
    if ((itemId / 10000 != 243) && (itemId != 3994225)) {
        return false;
    }
    return true;
}

bool is_skill_reset_item(int itemId) {
    return itemId / 10000 == 0xfa;
}

bool is_release_item(int itemId) {
    return itemId / 10000 == 0xf6;
}

bool is_maptransfer_item(int itemId) {
    return itemId / 10000 == 0xe8;
}

bool is_shopscanner_item(int itemId) {
    return itemId / 10000 == 0xe7;
}

bool is_select_npc_item(int itemId) {
    if ((itemId / 10000 != 0x221) && (itemId / 10000 != 0xef)) {
        return false;
    }
    return true;
}

bool is_minigame_item(int itemId) {
    return itemId / 10000 == 0x198;
}

bool is_book_item(int itemId) {
    return itemId / 10000 == 0x1a0;
}

bool is_exp_up_item(int itemId) {
    return itemId / 10000 == 0xed;
}

bool is_raise_item(int itemId) {
    return itemId / 1000 == 0x107c;
}

bool is_invitation_bundle_item(int itemId) {
    return itemId == 4031377 || itemId == 4031395;
}

bool is_couple_equip_item(int itemId) {
    if ((itemId / 100 == 0x2b70) && (itemId != 0x10f7c0)) {
        return true;
    }
    return false;
}

bool is_friendship_equip_item(int itemId) {
    if ((itemId / 100 == 0x2b78) && (itemId % 10 < 3)) {
        return true;
    }
    return false;
}

bool is_adventure_ring_item(int itemId) {
    if ((((itemId != 0x10f96b) && (itemId != 0x10f96c)) && (itemId != 0x10f96d)) &&
        ((itemId != 0x10f955 && (itemId != 0x10f97d)))) {
        return false;
    }
    return true;
}

bool is_javelin_item(int itemId) {
    return itemId / 10000 == 0xcf;
}

bool is_weapon_sticker(int itemId) {
    return itemId / 100000 == 0x11;
}

int is_morph_item(long param_1) {
    return param_1 / 10000 == 0xdd;
}

int is_ghost_item(long param_1) {
    return param_1 / 10000 == 0xec;
}

int is_pet_food_item(long param_1) {
    return param_1 / 10000 == 0xd4;
}

int is_portable_chair_item(long param_1) {
    return param_1 / 10000 == 0x12d;
}

int is_immediate_mobsummon_item(long param_1) {
    if ((param_1 / 1000 != 0x83d) && (param_1 != 0x200b63)) {
        return 0;
    }
    return 1;
}

int is_tamingmob_food_item(long param_1) {
    return param_1 / 10000 == 0xe2;
}

int is_bridle_item(long param_1) {
    return param_1 / 10000 == 0xe3;
}

int is_tamedmob(long param_1) {
    return param_1 / 10000 == 0xbe;
}

int is_saddle(long param_1) {
    return param_1 / 10000 == 0xbf;
}

int is_character_sale_item(long param_1) {
    if ((param_1 != 0x52ded8) && (param_1 != 0x52e2c0)) {
        return 0;
    }
    return 1;
}

int is_random_moneybag_item(long param_1) {
    long lVar1{};

    lVar1 = get_cashslot_item_type(param_1);
    if ((lVar1 == 0x13) && (param_1 / 1000 == 0x1452)) {
        return 1;
    }
    return 0;
}

long get_consume_cash_item_type(long param_1) {
    long lVar1{};

    lVar1 = get_cashslot_item_type(param_1);
    switch (lVar1) {
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x22:
        case 0x23:
        case 0x26:
        case 0x29:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x3d:
        case 0x3e:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4e:
            break;
        default:
            lVar1 = 0;
    }
    return lVar1;
}

int is_cash_pet_food_item(long param_1) {
    return param_1 / 10000 == 0x20c;
}

int is_cash_morph_item(long param_1) {
    return param_1 / 10000 == 0x212;
}

int is_random_morph_item_other(long param_1) {
    if ((param_1 / 10000 == 0xdd) && ((param_1 + -0x21b8d0) / 1000 == 2)) {
        return 1;
    }
    return 0;
}

int is_state_change_item(long param_1) {
    int iVar1;

    iVar1 = param_1 / 10000;
    if (((((iVar1 != 200) && (iVar1 != 201)) && (iVar1 != 202)) && ((iVar1 != 205 && (iVar1 != 221))))
        && ((iVar1 != 236 && ((iVar1 != 238 && (iVar1 != 245)))))) {
        return 0;
    }
    return 1;
}

bool is_blade(int itemId) {
    return itemId / 10000 == 134;
}

bool is_meso_protect_item(int itemId) {
    return itemId / 100 == 0x57e4;
}

int is_black_upgrade_item(long param_1) {
    return param_1 / 100 == 0x500b;
}

int is_acc_upgrade_item(long param_1) {
    return param_1 / 100 == 0x500c;
}

int is_new_upgrade_item(long param_1) {
    return param_1 / 1000 == 0x7fe;
}

int is_durability_upgrade_item(long param_1) {
    return param_1 / 1000 == 0x7ff;
}

int is_correct_upgrade_equip(long upgradeItemid, long equipItemId) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = upgradeItemid / 10000;
    if ((iVar1 == 0xf9) || (iVar1 == 0xf7)) {
        return 1;
    }
    if ((iVar1 != 0xcc) || (equipItemId / 1000000 != 1)) {
        return 0;
    }
    if ((((upgradeItemid / 100 == 0x500a) ||
          (iVar1 = is_black_upgrade_item(upgradeItemid), iVar1 != 0)) &&
         (iVar1 = is_pet_equip_item(equipItemId), iVar1 == 0)) ||
        ((iVar1 = is_hyper_upgrade_item(upgradeItemid), iVar1 != 0 ||
                                                        (iVar1 = is_itemoption_upgrade_item(upgradeItemid), iVar1 !=
                                                                                                            0)))) {
        return 1;
    }
    iVar1 = (upgradeItemid + -0x1f20c0) / 100;
    iVar3 = (equipItemId / 10000) % 100;
    iVar2 = is_acc_upgrade_item(upgradeItemid);
    if (iVar2 == 0) {
        iVar2 = is_new_upgrade_item(upgradeItemid);
        if ((iVar2 == 0) && (iVar2 = is_durability_upgrade_item(upgradeItemid), iVar2 == 0)) {
            return iVar1 == iVar3;
        }
        switch (iVar1 % 10) {
            case 0:
                return iVar3 - 0x1eU < 10;
            case 1:
                return iVar3 - 0x28U < 10;
            case 2:
                if ((iVar3 != 0) && ((iVar3 < 4 || (10 < iVar3)))) {
                    return 0;
                }
                break;
            case 3:
                switch (iVar3) {
                    case 1:
                    case 2:
                    case 3:
                    case 0xb:
                    case 0xc:
                    case 0xd:
                    case 0xe:
                        break;
                    default:
                        return 0;
                }
        }
    } else {
        if (iVar3 < 0xb) {
            return 0;
        }
        if (0xd < iVar3) {
            return 0;
        }
    }
    return 1;
}

bool is_monsterbook_card_item(int itemId) {
    return itemId / 10000 == 0xee;
}

bool is_masterybook_item(int itemId) {
    if (((itemId / 10000 != 0xe5) &&
         (((itemId / 10000 != 0x232 ||
            ((itemId != 0x55c126 && ((itemId == 0x55c127 || (itemId == 0x55c128)))))) &&
           (itemId != 0x55c126)))) && ((itemId != 0x55c127 && (itemId != 0x55c128)))) {
        return false;
    }
    return true;
}

bool is_skill_learn_item(int itemId) {
    if (itemId / 10000 != 0xe4) {
        return is_masterybook_item(itemId);
    }
    return true;
}

bool is_pellet_item(int itemId) {
    return itemId / 1000 == 233;
}

bool is_pellet_ice_item(int itemId) {
    return (itemId / 1000) == 2332;
}

bool is_pellet_fire_item(int itemId) {
    return (itemId / 1000) == 2331;
}

int get_weapon_type(int nWeaponItemid) {
    if (nWeaponItemid / 1000000 != 1) {
        return 0;
    }

    auto wt = (nWeaponItemid / 10000) % 100;

    switch (wt) {
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
            return wt;
        default:
            return 0;
    }
}

bool is_correct_bullet_item(int nWeaponItemid, int itemId) {
    auto wt = get_weapon_type(nWeaponItemid);

    if (wt == 0x2d && itemId == 1472063) {
        return itemId / 1000 == 2060;
    }

    if (wt == 0x2e) {
        return itemId / 1000 == 2061;
    }
    if (wt == 0x2f) {
        return itemId / 10000 == 207;
    }
    if (wt == 0x31) {
        return is_pellet_item(itemId);
    }
    return false;
}

int get_different_height_chair_type(int itemId) {
    if (itemId == 3010125) {
        return 1;
    }
    if (((itemId != 3010117) && (itemId != 3010118)) && (itemId != 3010075)) {
        return (itemId != 3010177) - 1 & 6;
    }
    return 5;
}

bool is_shooting_weapon(int nWeaponItemid) {
    auto wt = get_weapon_type(nWeaponItemid);
    return wt == 0x2d || wt == 0x2e || wt == 0x2f || wt == 0x31;
}

bool is_vehicle(int itemId) {
    if ((((itemId / 10000 != 0xbe) && (itemId / 10000 != 0xc1)) && (itemId != 0x1d05d8)) &&
        (((itemId != 0x1d05d9 && (itemId != 0x1d05da)) && (itemId / 1000 != 0x7bf)))) {
        return false;
    }
    return true;
}

int is_event_vehicle_type2(long param_1) {
    switch (param_1) {
        case 0x1d7ae4:
        case 0x1d7ae6:
        case 0x1d7ae7:
        case 0x1d7ae8:
        case 0x1d7ae9:
        case 0x1d7aea:
        case 0x1d7aeb:
        case 0x1d7aec:
        case 0x1d7aed:
        case 0x1d7aee:
        case 0x1d7af1:
        case 0x1d7af2:
        case 0x1d7af3:
        case 0x1d7af4:
        case 0x1d7af5:
        case 0x1d7af6:
        case 0x1d7af7:
        case 0x1d7af9:
        case 0x1d7afa:
        case 0x1d7afb:
        case 0x1d7afc:
        case 0x1d7afd:
        case 0x1d7b02:
        case 0x1d7b03:
        case 0x1d7b05:
        case 0x1d7b06:
        case 0x1d7b07:
        case 0x1d7b08:
            return 1;
        default:
            return 0;
    }
}

bool __cdecl is_matched_itemid_job(long itemId,short jobId)

{
  if ((jobId / 100 == 22) || (jobId == 2001)) {
    if (itemId - 5050001U < 4) {
      return false;
    }
  }
  else if (itemId - 5050005U < 5) {
    return false;
  }
  return true;
}