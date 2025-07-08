#include "SkillUtils.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "JobUtils.hpp"

bool is_throw_bomb_skill(int skillId) {
    return is_prepare_bomb_skill(skillId) || is_not_prepare_bomb_skill(skillId);
}

bool is_mob_body_bomb(int nSkillID) {
    return is_throw_bomb_skill(nSkillID) && nSkillID == 0x423d0b;
}

int is_ignore_master_level_for_skillinfo(long param_1) {
    bool bVar1{};

    if (param_1 < 0x2f9b8c) {
        if (0x2f9b89 < param_1) {
            return 1;
        }
        if (param_1 < 0x20594a) {
            if (param_1 == 0x205949) {
                return 1;
            }
            if (param_1 == 0x11170c) {
                return 1;
            }
            if (param_1 == 0x129dad) {
                return 1;
            }
            bVar1 = param_1 == 0x14244b;
        } else {
            if (param_1 == 0x21dfe9) {
                return 1;
            }
            bVar1 = param_1 == 0x23668a;
        }
    } else if (param_1 < 0x40646a) {
        if (param_1 == 0x406469) {
            return 1;
        }
        if (param_1 < 0x312229) {
            return 0;
        }
        if (param_1 < 0x31222b) {
            return 1;
        }
        bVar1 = param_1 == 0x3eddca;
    } else {
        if (param_1 == 0x004e200b) {
            return 1;
        }
        bVar1 = param_1 == 0x4fa6ac;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}

int is_able_to_map_macrosys_skill(long skillId) {
    int iVar2;
    iVar2 = (skillId / 1000) % 10;
    if ((iVar2 != 0) && (iVar2 != 9)) {
        if (((!is_keydown_skill(skillId)) &&
             (((skillId != 0x200f0a && (skillId != 0x2195aa)) && (skillId != 0x231c49)))) &&
            ((((skillId != 0x00b8a58b && (skillId != 0x1513c09)) &&
               (skillId != 0x00404141)) &&
              (((skillId != 0x3eba9e && (skillId != 0x0040413e)) &&
                (((skillId != 0x00a9634d &&
                   (((skillId != 0x00d72a0c && (skillId != 0x41eeeb)) && (skillId != 0x1f78e2a)))) &&
                  (skillId != 0x1e84bea)))))))) {
            return 1;
        }
    }
    return 0;
}

int32_t __cdecl is_novice_skill(long nSkillID) {
    int iVar1;

    iVar1 = nSkillID / 10000;
    if ((iVar1 != (iVar1 / 1000) * 1000) && (iVar1 != 2001)) {
        return 0;
    }
    return 1;
}

int is_guild_skill(long skillId) {
    if ((skillId != 0) && (-1 < skillId)) {
        return skillId / 10000 == 9100;
    }
    return 0;
}

bool is_guided_bullet_skill(int skillId) {
    switch (skillId) {
        case 5211006:
        case 5220011:
        case 22151002:
            return true;
        default:
            return false;
    }
}

int is_active_skill(long param_1) {
    int iVar1;

    iVar1 = (param_1 / 1000) % 10;
    if ((iVar1 != 0) && (iVar1 != 9)) {
        return 1;
    }
    return 0;
}

bool is_keydown_skill(int skillId) {
    bool bVar1{};

    if (skillId < 0xc80edb) {
        if (skillId == 0xc80eda) {
            return true;
        }
        if (skillId < 0x31260a) {
            if (skillId == 0x312609) {
                return true;
            }
            if (skillId < 0x236a6a) {
                if (skillId == 0x236a69) {
                    return true;
                }
                if (skillId == 0x205d29) {
                    return true;
                }
                bVar1 = skillId == 0x21e3c9;
            } else {
                bVar1 = skillId == 0x2f9f6c;
            }
        } else if (skillId < 0x4f5c6b) {
            if (skillId == 0x4f5c6a) {
                return true;
            }
            if (skillId < 0x423d0a) {
                return false;
            }
            if (skillId < 0x423d0c) {
                return true;
            }
            bVar1 = skillId == 0x4dd5cc;
        } else {
            bVar1 = skillId == 0x4faa8c;
        }
    } else if (skillId < 0x1f914ce) {
        if (skillId == 0x1f914cd) {
            return true;
        }
        if (skillId < 0x1518a29) {
            if (skillId == 0x1518a28) {
                return true;
            }
            if (skillId == 0x00d7511e) {
                return true;
            }
            bVar1 = skillId == 0x00e66c4b;
        } else {
            bVar1 = skillId == 0x151ff59;
        }
    } else {
        if (skillId == 0x1f962f1) {
            return true;
        }
        if (skillId == 0x21612a9) {
            return true;
        }
        bVar1 = skillId == 0x2179951;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

int is_heros_will_skill(long param_1) {
    bool bVar1{};

    if (param_1 < 0x406851) {
        if (param_1 == 0x406850) {
            return 1;
        }
        if (param_1 < 0x21e3d1) {
            if (param_1 == 0x21e3d0) {
                return 1;
            }
            if (param_1 < 0x142833) {
                if (param_1 == 0x142832) {
                    return 1;
                }
                if (param_1 == 0x111af3) {
                    return 1;
                }
                bVar1 = param_1 == 0x12a194;
            } else {
                bVar1 = param_1 == 0x205d30;
            }
        } else if (param_1 < 0x312611) {
            if (param_1 == 0x312610) {
                return 1;
            }
            if (param_1 == 0x236a71) {
                return 1;
            }
            bVar1 = param_1 == 0x2f9f71;
        } else {
            bVar1 = param_1 == 0x3ee1b1;
        }
    } else if (param_1 < 0x1524d7d) {
        if (param_1 == 0x1524d7c) {
            return 1;
        }
        if (param_1 < 0x4faa93) {
            if (param_1 == 0x4faa92) {
                return 1;
            }
            if (param_1 == 0x423d10) {
                return 1;
            }
            bVar1 = param_1 == 0x4e23f0;
        } else {
            bVar1 = param_1 == 0x14247f0;
        }
    } else {
        if (param_1 == 0x1ea20b0) {
            return 1;
        }
        if (param_1 == 0x1f962f0) {
            return 1;
        }
        bVar1 = param_1 == 0x217e770;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}

int is_ignore_mob_during_gauge_skill(long param_1) {
    bool bVar1{};

    if (param_1 < 0x4f5c6b) {
        if (param_1 == 0x4f5c6a) {
            return 1;
        }
        if (param_1 < 0x31260a) {
            if (param_1 == 0x312609) {
                return 1;
            }
            if (param_1 == 0x205d29) {
                return 1;
            }
            if (param_1 == 0x21e3c9) {
                return 1;
            }
            bVar1 = param_1 == 0x236a69;
        } else {
            if (param_1 < 0x423d0a) {
                return 0;
            }
            if (param_1 < 0x423d0c) {
                return 1;
            }
            bVar1 = param_1 == 0x4dd5cc;
        }
    } else if (param_1 < 0x1518a29) {
        if (param_1 == 0x1518a28) {
            return 1;
        }
        if (param_1 == 0x00d7511e) {
            return 1;
        }
        bVar1 = param_1 == 0x00e66c4b;
    } else {
        if (param_1 == 0x151ff59) {
            return 1;
        }
        bVar1 = param_1 == 0x1f914cd;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}

int is_rect_attack_shoot_skill(long param_1) {
    bool bVar1{};

    if (param_1 < 0xc7e7ce) {
        if (param_1 == 0xc7e7cd) {
            return 1;
        }
        if (param_1 < 0x31260c) {
            if (param_1 == 0x31260b) {
                return 1;
            }
            if (param_1 < 0x30d7ec) {
                if (param_1 == 0x30d7eb) {
                    return 1;
                }
                if (param_1 == 0x2f514b) {
                    return 1;
                }
                if (param_1 == 0x2f785c) {
                    return 1;
                }
                bVar1 = param_1 == 0x2f9f6b;
            } else {
                if (param_1 == 0x30d7ed) {
                    return 1;
                }
                if (param_1 == 0x30fefc) {
                    return 1;
                }
                bVar1 = param_1 == 0x312609;
            }
        } else if (param_1 < 0x4f5c6a) {
            if (param_1 == 0x4f5c69) {
                return 1;
            }
            if (param_1 == 0x3eba9d) {
                return 1;
            }
            if (param_1 == 0x3ee1ab) {
                return 1;
            }
            bVar1 = param_1 == 0x40684b;
        } else {
            if (param_1 < 0x4faa91) {
                if (param_1 == 0x4faa90) {
                    return 1;
                }
                if (param_1 < 0x4f837c) {
                    return 0;
                }
                if (0x4f837d < param_1) {
                    return 0;
                }
                return 1;
            }
            bVar1 = param_1 == 0x00a9634c;
        }
    } else if (param_1 < 0x1424407) {
        if (param_1 == 0x1424406) {
            return 1;
        }
        if (param_1 < 0xd7511b) {
            if (param_1 == 0x00d7511a) {
                return 1;
            }
            if (param_1 == 0xc80ed8) {
                return 1;
            }
            if (param_1 == 0xc80ede) {
                return 1;
            }
            bVar1 = param_1 == 0x00d72a0e;
        } else {
            if (param_1 == 0x00e6935f) {
                return 1;
            }
            if (param_1 == 0x141f5e4) {
                return 1;
            }
            bVar1 = param_1 == 0x1421cf4;
        }
    } else if (param_1 < 0x21612aa) {
        if (param_1 == 0x21612a9) {
            return 1;
        }
        if (param_1 < 0x1f962ea) {
            if (param_1 == 0x1f962e9) {
                return 1;
            }
            if (0x1f914c8 < param_1) {
                if (param_1 < 0x1f914cb) {
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        bVar1 = param_1 == 0x1f962ed;
    } else {
        if (param_1 == 0x2179951) {
            return 1;
        }
        if (param_1 == 0x217c067) {
            return 1;
        }
        bVar1 = param_1 == 0x217e774;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}


int __cdecl is_rect_attack_magic_skill(long param_1) {
    bool bVar1{};

    if (param_1 < 0x40684d) {
        if (param_1 == 0x40684c) {
            return 1;
        }
        if (param_1 < 0x21e3ca) {
            if (param_1 == 0x21e3c9) {
                return 1;
            }
            if (param_1 < 0x205d2c) {
                if (param_1 == 0x205d2b) {
                    return 1;
                }
                if (param_1 < 0x20361b) {
                    if (param_1 == 0x20361a) {
                        return 1;
                    }
                    if (param_1 == 0x1e886d) {
                        return 1;
                    }
                    bVar1 = param_1 == 0x200f0c;
                } else {
                    bVar1 = param_1 == 0x205d29;
                }
            } else {
                if (param_1 < 0x2195ae) {
                    if (param_1 == 0x2195ad) {
                        return 1;
                    }
                    if (param_1 < 0x205d2e) {
                        return 0;
                    }
                    if (0x205d2f < param_1) {
                        return 0;
                    }
                    return 1;
                }
                bVar1 = param_1 == 0x21bcba;
            }
        } else if (param_1 < 0x23435d) {
            if (param_1 == 0x23435c) {
                return 1;
            }
            if (param_1 == 0x21e3cb) {
                return 1;
            }
            if (param_1 == 0x21e3cf) {
                return 1;
            }
            bVar1 = param_1 == 0x231c4a;
        } else {
            if (param_1 == 0x236a69) {
                return 1;
            }
            if (param_1 == 0x236a70) {
                return 1;
            }
            bVar1 = param_1 == 0x3ee1ac;
        }
    } else if (param_1 < 0x151ff5b) {
        if (0x151ff58 < param_1) {
            return 1;
        }
        if (param_1 < 12111007) {
            if (param_1 == 0xb8cc9e) {
                return 1;
            }
            if (param_1 == 0xb71eeb) {
                return 1;
            }
            if (param_1 == 0xb8a58e) {
                return 1;
            }
            bVar1 = param_1 == 0xb8cc9b;
        } else {
            if (param_1 == 0x1513c08) {
                return 1;
            }
            if (param_1 == 0x1518a28) {
                return 1;
            }
            bVar1 = param_1 == 0x151d849;
        }
    } else if (param_1 < 0x1e9d28a) {
        if (param_1 == 0x1e9d289) {
            return 1;
        }
        if (param_1 < 0x1524d7c) {
            if (0x1524d79 < param_1) {
                return 1;
            }
            bVar1 = param_1 == 0x1522669;
        } else {
            bVar1 = param_1 == 0x152748a;
        }
    } else {
        if (param_1 == 0x1e9f99b) {
            return 1;
        }
        if (param_1 == 0x1e9f9a3) {
            return 1;
        }
        bVar1 = param_1 == 0x1ea20ac;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}

long get_vertical_adjust_of_attack_range(long param_1) {
    if (param_1 < 0xa9634d) {
        if (param_1 != 0x00a9634c) {
            if (param_1 < 0x31260c) {
                if (param_1 != 0x31260b) {
                    if (param_1 < 0x30d7ee) {
                        if (param_1 == 0x30d7ed) {
                            return 10;
                        }
                        if ((param_1 != 0x2dcaac) && (param_1 != 0x2f9f6b)) {
                            return 0;
                        }
                    } else if (param_1 != 0x312609) {
                        return 0;
                    }
                }
                return 0x14;
            }
            if (param_1 == 0x3eba9d) {
                return 0x24;
            }
            if ((param_1 != 0x3ee1ab) && (param_1 != 0x40684b)) {
                return 0;
            }
            return 10;
        }
    } else if (param_1 < 0x141f5e5) {
        if (param_1 != 0x141f5e4) {
            if (param_1 < 0xe6935f) {
                if (param_1 == 0x00e6935e) {
                    return 0x96;
                }
                if (param_1 == 0xc80ede) {
                    return 10;
                }
                if (param_1 == 0x00d7511a) {
                    return 0x24;
                }
            } else if (param_1 == 0x00e6935f) {
                return 0x3c;
            }
            return 0;
        }
    } else if (param_1 != 0x1421cf4) {
        if (param_1 == 0x1f914c9) {
            return 0x14;
        }
        if (param_1 != 0x1f962ed) {
            return 0;
        }
        return 0xc;
    }
    return 0x3c;
}

int is_attack_area_set_by_data(long param_1) {
    bool bVar1{};

    if (param_1 < 0xc80ed9) {
        if (param_1 == 0xc80ed8) {
            return 1;
        }
        if (param_1 < 0x4f5c6a) {
            if (param_1 == 0x4f5c69) {
                return 1;
            }
            if (param_1 < 0x30d7ec) {
                if (param_1 == 0x30d7eb) {
                    return 1;
                }
                if (param_1 == 0x2f514b) {
                    return 1;
                }
                bVar1 = param_1 == 0x2f785c;
            }
            else {
                bVar1 = param_1 == 0x30fefc;
            }
        }
        else {
            if (param_1 < 0x4faa91) {
                if (param_1 == 0x4faa90) {
                    return 1;
                }
                if (param_1 < 0x4f837c) {
                    return 0;
                }
                if (0x4f837d < param_1) {
                    return 0;
                }
                return 1;
            }
            bVar1 = param_1 == 0xc7e7cd;
        }
    }
    else if (param_1 < 0x21612aa) {
        if (param_1 == 0x21612a9) {
            return 1;
        }
        if (param_1 < 0x1f914cb) {
            if (param_1 == 0x1f914ca) {
                return 1;
            }
            if (param_1 == 0x00d72a0e) {
                return 1;
            }
            bVar1 = param_1 == 0x1424406;
        }
        else {
            bVar1 = param_1 == 0x1f962e9;
        }
    }
    else {
        if (param_1 == 0x2179951) {
            return 1;
        }
        if (param_1 == 0x217c067) {
            return 1;
        }
        bVar1 = param_1 == 0x217e774;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}

int is_position_up_skill_on_riding(long param_1, long param_2) {
    int iVar1;
    bool bVar2{};

    if (param_1 < 0x1f962ee) {
        if (param_1 == 0x1f962ed) {
            return 1;
        }
        if (param_1 < 0x1f914ca) {
            if (param_1 == 0x1f914c9) {
                return 1;
            }
            if (param_1 == 0) {
                iVar1 = is_wildhunter_job(param_2);
                if ((iVar1 == 0) && (iVar1 = is_mechanic_job(param_2), iVar1 == 0)) {
                    return 0;
                }
                return 1;
            }
            if (param_1 == 0x1f78e28) {
                return 1;
            }
            bVar2 = param_1 == 0x1f910e9;
        }
        else {
            if (param_1 == 0x1f93bd9) {
                return 1;
            }
            if (param_1 == 0x1f962e9) {
                return 1;
            }
            bVar2 = param_1 == 0x1f962eb;
        }
    }
    else if (param_1 < 0x217c05d) {
        if (param_1 == 0x217c05c) {
            return 1;
        }
        if (param_1 == 0x1f962f1) {
            return 1;
        }
        if (param_1 == 0x21612ac) {
            return 1;
        }
        bVar2 = param_1 == 0x2179952;
    }
    else {
        if (param_1 == 0x217c067) {
            return 1;
        }
        if (param_1 == 0x217e76d) {
            return 1;
        }
        bVar2 = param_1 == 0x217e775;
    }
    if (bVar2) {
        return 1;
    }
    return 0;
}

int get_skill_class(int skillId) {
    return skillId / 10000;
}

bool is_smoothing_movingshoot(long param_1, long param_2) {
    bool bVar1{};

    if (param_1 < 0x1f914ca) {
        if (param_1 == 0x1f914c9) {
            return true;
        }
        if (param_1 == 0) {
            return param_2 / 100 == 0x21;
        }
        bVar1 = param_1 == 0x1f78e28;
    } else {
        if (param_1 == 0x1f93bd9) {
            return true;
        }
        bVar1 = param_1 == 0x1f962ed;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

int get_element_from_mobskillid(int nSkillID) {
    switch (nSkillID) {
        case 0x7d:
            return 4;
        case 0x82:
            return 2;
        default:
            return -1;
    }
}

bool is_skill_need_master_level(long skillId) {
    int iVar1;
    long lVar2{};

    iVar1 = is_ignore_master_level_for_common(skillId);
    if (iVar1 != 0) {
        return false;
    }
    iVar1 = skillId / 10000;
    if ((iVar1 / 100 == 0x16) || (iVar1 == 0x7d1)) {
        lVar2 = get_job_level(iVar1);
        if ((((lVar2 != 9) && (lVar2 != 10)) && (skillId != 22111001)) &&
            ((skillId != 22141002 && (skillId != 22140000)))) {
            return false;
        }
        return true;
    }
    if (iVar1 / 10 == 0x2b) {
        lVar2 = get_job_level(iVar1);
        if (lVar2 == 4) {
            return true;
        }
        if (skillId == 4311003) {
            return true;
        }
        if (skillId == 0x41eee8) {
            return true;
        }
        if (skillId == 4331002) {
            return true;
        }
        if (skillId == 4331005) {
            return true;
        }
    } else if (iVar1 != (iVar1 / 100) * 100) {
        return iVar1 % 10 == 2;
    }
    return false;
}

bool is_ignore_master_level_for_common(long skillid) {
    bool bVar1{};

    if (skillid < 0x31222b) {
        if (0x312228 < skillid) {
            return true;
        }
        if (skillid < 0x20594a) {
            if (skillid == 0x205949) {
                return true;
            }
            if (skillid == 0x11170c) {
                return true;
            }
            if (skillid == 0x129dad) {
                return true;
            }
            bVar1 = skillid == 0x14244b;
        } else {
            if (0x23668a < skillid) {
                if (skillid < 0x2f9b8a) {
                    return false;
                }
                if (0x2f9b8b < skillid) {
                    return false;
                }
                return true;
            }
            if (skillid == 0x23668a) {
                return true;
            }
            bVar1 = skillid == 0x21dfe9;
        }
    } else if (skillid < 0x4fa6ad) {
        if (skillid == 0x4fa6ac) {
            return true;
        }
        if (skillid == 0x3eddca) {
            return true;
        }
        if (skillid == 0x406469) {
            return true;
        }
        bVar1 = skillid == 0x4e200b;
    } else {
        if (skillid == 0x1ea1cc9) {
            return true;
        }
        bVar1 = skillid == 0x1f95f0a;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

bool is_teleport_mastery_skill(int skillId) {
    switch (skillId) {
        case 2311007:
        case 2211007:
        case 2111007:
        case 3211101:
            return true;
        default:
            return false;
    }
}

int get_novice_skill_as_race(int skillId, int job) {
    if (is_evan_job(job)) {
        return skillId + 20010000;
    }

    return (job / 1000) * 10000000 + skillId;
}

bool is_shoot_skill_not_switched_to_melee_attack(int nSkillId) {
    //TODO 006edcf0
    UNIMPLEMENTED;
}

int get_skill_root_from_skill(int skillId) {
    return skillId / 10000;
}

bool is_shoot_skill_not_consuming_bullet(int skillId) {
    if (!is_shoot_skill_not_using_shooting_weapon(skillId)) {
        if (skillId < 0x21612aa) {
            if (skillId != 0x21612a9) {
                if (skillId < 0xc7e7ce) {
                    if ((((skillId != 0xc7e7cd) && (skillId != 0x2f514b)) && (skillId != 0x30d7eb)) &&
                        (skillId != 0x3eba9c)) {
                        return false;
                    }
                }
                else if ((skillId != 0xd72a0e) && (skillId != 0x1f914ca)) {
                    return false;
                }
            }
        }
        else if (skillId < 0x217c068) {
            if (skillId != 0x217c067) {
                if (skillId < 0x2179953) {
                    if ((skillId < 0x2179951) && (skillId != 0x21612ac)) {
                        return false;
                    }
                }
                else if (skillId != 0x217c05c) {
                    return false;
                }
            }
        }
        else if ((skillId != 0x217e76d) && ((skillId < 0x217e774 || (0x217e775 < skillId)))) {
            return false;
        }
    }
    return true;
}

bool is_vehicle_skill(int skillId) {
    bool bVar1{};

    if (skillId < 0x13157fd) {
        if (skillId == 0x13157fc) {
            return true;
        }
        if (skillId < 0x989a6d) {
            if (skillId == 0x989a6c) {
                return true;
            }
            if (skillId == 0x3ec) {
                return true;
            }
            bVar1 = skillId == 0x4faa8e;
        } else {
            bVar1 = skillId == 0x13130ec;
        }
    } else {
        if (skillId == 0x1c9c76c) {
            return true;
        }
        if (skillId == 0x1f78e29) {
            return true;
        }
        bVar1 = skillId == 0x21612aa;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

bool is_event_vehicle_skill(int skillId) {
    switch (skillId % 10000) {
        case 0x401:
        case 0x403:
        case 0x404:
        case 0x405:
        case 0x406:
        case 0x407:
        case 0x409:
        case 0x40a:
        case 0x40b:
        case 0x40c:
        case 0x40d:
        case 0x40e:
        case 0x40f:
        case 0x410:
        case 0x412:
        case 0x414:
        case 0x419:
        case 0x41a:
        case 0x41b:
        case 0x41c:
        case 0x41d:
        case 0x41e:
        case 0x427:
        case 0x428:
        case 0x429:
        case 0x42d:
        case 0x42e:
        case 0x42f:
            return true;
        default:
            return false;
    }
}

bool is_jump_rush_skill(int skillId) {
    return skillId == 4331005;
}

bool is_dual_add_damage_except_skill(int nSkillID) {
    return (nSkillID >= 4341002 && nSkillID <= 4341004);
}

bool is_teleport_skill(int param_1) {
    if (((((param_1 != 0x200f0a) && (param_1 != 0x2195aa)) && (param_1 != 0x231c49)) &&
         ((param_1 != 0x89582a && (param_1 != 0x7a15e9)))) &&
        ((param_1 != 0xb8a58b &&
        ((param_1 != 0x1513c09 && (param_1 != 0x1e84bea)))))) {
            return false;
        }
        return true;
}

int is_self_destruct_summon_skill(long param_1) {
    if (param_1 < 0x217c05e) {
        if ((((param_1 != 0x217c05d) && (param_1 != 0x1f914d0)) && (param_1 != 0x2179949)) &&
            (param_1 != 0x217c05a)) {
            return 0;
        }
    }
    else if (param_1 != 0x217c063) {
        if (param_1 < 0x217e771) {
            return 0;
        }
        if (0x217e773 < param_1) {
            return 0;
        }
    }
    return 1;
}

long get_summon_idx_from_skill_id(long param_1) {
    if (param_1 < 0x30fefe) {
        if (param_1 == 0x30fefd) {
            return 2;
        }
        if (param_1 < 0x2f785e) {
            if (param_1 == 0x2f785d) {
                return 2;
            }
            if (param_1 == 0x23435e) {
                return 1;
            }
            if (param_1 == 0x2f785a) {
                return 1;
            }
        }
        else if (param_1 == 0x30fefa) {
            return 1;
        }
    }
    else if (param_1 < 0x1f93bdc) {
        if ((param_1 == 0x1f93bdb) || (param_1 == 0x423d0e)) {
            return 1;
        }
        if (param_1 == 0xc80edc) {
            return 1;
        }
    }
    else if (param_1 == 0x1f93bdd) {
        return 2;
    }
    return 0;
}

long get_summoned_attack_delay(long param_1, long param_2) {

    if (param_1 < 0x217c05b) {
        if (param_1 != 0x217c05a) {
            if ((param_1 == 0x4f837a) || (param_1 == 0x4fa6a2)) {
                return 0x5dc;
            }
            if (param_1 != 0x1f914d0) {
                return 3000;
            }
        }
    }
    else if (param_1 != 0x217e771) {
        if (param_1 != 0x217e773) {
            return 3000;
        }
        return 300;
    }

    auto skill = CSkillInfo::GetInstance()->GetSkill(param_1);
    if (skill && (0 < param_2)) {
        auto skillData = skill->GetLevelData(param_2);
        auto x = skillData._ZtlSecureGet_nX();
        return x * 1000;
    }
    return 3000;
}

int is_invulnerable_summon_skill(long moveAbility, long skillId) {
    int iVar1;
    bool bVar2{};

    if (moveAbility == 0) {
        if (skillId < 35101002) {
            if (skillId == 35101001) {
                return 1;
            }
            if (skillId < 32111007) {
                if (skillId == 32111006) {
                    return 1;
                }
                if (skillId == 4111007) {
                    return 1;
                }
                bVar2 = skillId == 0x0040413f;
            }
            else {
                bVar2 = skillId == 33101008;
            }
        }
        else {
            if (35111011 < skillId) {
                if ((0x217e770 < skillId) && (skillId < 35121012)) {
                    return 1;
                }
                return is_summon_octopus_skill(skillId);
            }
            if (skillId == 35111011) {
                return 1;
            }
            if (skillId == 0x217c05a) {
                return 1;
            }
            bVar2 = skillId == 35111005;
        }
        if (!bVar2) {
            return is_summon_octopus_skill(skillId);
        }
    }
    return 1;
}

bool is_summon_octopus_skill(int skillId) {
    return (skillId == 5211001) && (skillId == 5220002); // TODO
}

int get_skill_degree_from_skill_root(int skillId) {
    if (skillId == 0) {
        return 0;
    }
    if (skillId == (skillId / 100) * 100) {
        return 1;
    }
    //TODO
    return (-(skillId % 10 != 0) & 0xfffffffe) + 2;
}

bool is_delayed_hit_sfx_needed_skill(int skillId) {
    return skillId == 0x30fefb;
}

bool is_jaguar_melee_attack_skill(int skillId) {
    bool bVar1 = false;
    if (skillId < 33111003) {
        if (skillId == 33111002) {
            return true;
        }
        if (skillId == 33101002) {
            return true;
        }
        bVar1 = skillId == 33101007;
    } else {
        if (skillId == 33111006) {
            return true;
        }
        bVar1 = skillId == 33121002;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

int get_required_combo_count(int nSkillId) {
    switch (nSkillId) {

        case 21110004:
            return 100;
        case 21100004:
        case 21100005:
            return 30;
        case 21120006:
        case 21120007:
            return 200;
        default:
            return 0;
    }
}

int get_element_by_charged_skillid(int32_t nChargeSkillID) {
    if (nChargeSkillID < 0x12a18d) {
        if (nChargeSkillID == 0x12a18c) {
            return 5;
        }
        if (nChargeSkillID == 0x127a7c) {
            return 2;
        }
        if (nChargeSkillID == 0x127a7e) {
            return 1;
        }
        if (nChargeSkillID != 0x127a80) {
            return 0;
        }
    } else {
        if (nChargeSkillID == 0xa98a5f) {
            return 5;
        }
        if (nChargeSkillID != 15101006) {
            if (nChargeSkillID == 0x14220dd) {
                return 1;
            }
            return 0;
        }
    }
    return 3;
}

bool is_bmage_aura_skill(int skillId) {
    if (skillId < 0x1e9f5b1) {
        if (((skillId == 0x1e9f5b0) || (skillId == 0x1e84beb)) ||
            ((0x1e9d289 < skillId && (skillId < 0x1e9d28c)))) {
            return true;
        }
    } else if ((0x1ea1cbf < skillId) && (skillId < 0x1ea1cc2)) {
        return true;
    }
    return false;
}

bool is_upgrade_skill(int nSkillId) {
    switch (nSkillId) {
        case 5210000:
        case 5220002:
        case 5220011:
            return true;
        default:
            return false;
    }
}

int get_required_height_jump_rush(int skillId) {
    int result = skillId == 4331005 ? -106 : 0;
    return result + 0x69;
}

bool is_able_to_jumpshoot(int skillId, int job) {
    bool bVar1{};

    if (skillId < 0x1f914ca) {
        if (skillId == 0x1f914c9) {
            return true;
        }
        if (skillId == 0) {
            return job / 100 == 0x21;
        }
        bVar1 = skillId == 0x1f78e28;
    } else {
        if (skillId == 0x1f962e9) {
            return true;
        }
        bVar1 = skillId == 0x1f962f1;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

int get_max_gauge_time(int skillId) {
    if (!is_keydown_skill(skillId)) {
        return 0;
    }
    if (skillId < 0x4dd5cd) {
        if (skillId != 0x4dd5cc) {
            if (0x312609 < skillId) {
                if (skillId == 0x423d0a) {
                    return 600;
                }
                if (skillId != 0x423d0b) {
                    return 2000;
                }
                return 0x4b0;
            }
            if (skillId == 0x312609) {
                return 900;
            }
            if (((skillId != 0x205d29) && (skillId != 0x21e3c9)) && (skillId != 0x236a69)) {
                return 2000;
            }
        }
        return 1000;
    }
    if (skillId < 0x1518a29) {
        if (skillId == 0x1518a28) {
            return 500;
        }
        if (skillId == 0x4f5c6a) {
            return 1000;
        }
        if (skillId == 0x00d7511e) {
            return 1000;
        }
        if (skillId == 0x00e66c4b) {
            return 1000;
        }
    } else {
        if (skillId == 0x151ff59) {
            return 500;
        }
        if (skillId == 0x1f914cd) {
            return 900;
        }
    }
    return 2000;
}

int is_antirepeat_buff_skill(long param_1) {
    bool bVar1{};

    if (param_1 < 0x3eba9a) {
        if (param_1 == 0x3eba99) {
            return 1;
        }
        if (param_1 < 0x205d29) {
            if (param_1 == 0x205d28) {
                return 1;
            }
            if (param_1 < 0x12a189) {
                if (param_1 == 0x12a188) {
                    return 1;
                }
                if (0x111ae8 < param_1) {
                    if (param_1 == 0x12536e) {
                        return 1;
                    }
                    if (param_1 < 0x127a81) {
                        return 0;
                    }
                    if (0x127a82 < param_1) {
                        return 0;
                    }
                    return 1;
                }
                if (param_1 == 0x111ae8) {
                    return 1;
                }
                if (param_1 == 0xf462b) {
                    return 1;
                }
                if (param_1 == 0x10ccce) {
                    return 1;
                }
                bVar1 = param_1 == 0x10f3df;
            } else if (param_1 < 0x142829) {
                if (param_1 == 0x142828) {
                    return 1;
                }
                if (param_1 < 0x13da0e) {
                    return 0;
                }
                if (param_1 < 0x13da10) {
                    return 1;
                }
                bVar1 = param_1 == 0x14011f;
            } else {
                if (param_1 == 0x200f09) {
                    return 1;
                }
                bVar1 = param_1 == 0x200f0b;
            }
        } else if (param_1 < 0x236a69) {
            if (param_1 == 0x236a68) {
                return 1;
            }
            if (param_1 < 0x231c4d) {
                if (param_1 == 0x231c4c) {
                    return 1;
                }
                if (param_1 == 0x2195a9) {
                    return 1;
                }
                if (param_1 == 0x2195ab) {
                    return 1;
                }
                bVar1 = param_1 == 0x21e3c8;
            } else {
                if (param_1 == 0x234359) {
                    return 1;
                }
                bVar1 = param_1 == 0x23435b;
            }
        } else if (param_1 < 0x2f9f6b) {
            if (param_1 == 0x2f9f6a) {
                return 1;
            }
            if (param_1 == 0x236a6d) {
                return 1;
            }
            bVar1 = param_1 == 0x2f9f68;
        } else {
            if (param_1 == 0x312608) {
                return 1;
            }
            bVar1 = param_1 == 0x3e938c;
        }
    } else if (param_1 < 0xa9634c) {
        if (param_1 == 0x00a9634b) {
            return 1;
        }
        if (param_1 < 0x4dfce0) {
            if (param_1 == 0x4dfcdf) {
                return 1;
            }
            if (param_1 < 0x41c7da) {
                if (param_1 == 0x41c7d9) {
                    return 1;
                }
                if (param_1 == 0x3ee1a8) {
                    return 1;
                }
                if (param_1 == 0x00401a2b) {
                    return 1;
                }
                bVar1 = param_1 == 0x406848;
            } else {
                if (param_1 == 0x423d08) {
                    return 1;
                }
                bVar1 = param_1 == 0x423d0f;
            }
        } else if (param_1 < 0x4f8380) {
            if (param_1 == 0x4f837f) {
                return 1;
            }
            if (param_1 == 0x4e23e8) {
                return 1;
            }
            bVar1 = param_1 == 0x4e23f1;
        } else {
            if (param_1 == 0x4faa88) {
                return 1;
            }
            bVar1 = param_1 == 0xa7dca9;
        }
    } else if (param_1 < 0x1524d79) {
        if (param_1 == 0x1524d78) {
            return 1;
        }
        if (param_1 < 0xe6935e) {
            if (param_1 == 0x00e6935d) {
                return 1;
            }
            if (param_1 < 0xb8a588) {
                return 0;
            }
            if (param_1 < 0xb8a58a) {
                return 1;
            }
            bVar1 = param_1 == 0x00d72a0b;
        } else {
            if (param_1 == 0x14247e8) {
                return 1;
            }
            bVar1 = param_1 == 0x151d84b;
        }
    } else if (param_1 < 0x1ea20b0) {
        if (param_1 == 0x1ea20af) {
            return 1;
        }
        if (param_1 == 0x1527488) {
            return 1;
        }
        bVar1 = param_1 == 0x1e9f99c;
    } else {
        if (param_1 == 0x1f962ef) {
            return 1;
        }
        bVar1 = param_1 == 0x217c065;
    }
    if (bVar1) {
        return 1;
    }
    return 0;
}

bool is_command_skill(long param_1) {
    bool bVar1{};

    if (param_1 < 0x1421cf9) {
        if (0x1421cf5 < param_1) {
            return true;
        }
        if (0x141f5e2 < param_1) {
            if (0x1421cf4 < param_1) {
                return false;
            }
            if (0x1421cf2 < param_1) {
                return true;
            }
            if (param_1 < 0x141f5e4) {
                return false;
            }
            if (param_1 < 0x141f5e6) {
                return true;
            }
            return false;
        }
        if (21100000 < param_1) {
            return true;
        }
        if (param_1 < 0x1312d11) {
            if (0x1312d0d < param_1) {
                return true;
            }
            bVar1 = param_1 == 0x4215fd;
        } else {
            bVar1 = param_1 == 0x1406f42;
        }
    } else {
        if (param_1 < 0x1e9d289) {
            if (param_1 == 0x1e9d288) {
                return true;
            }
            if (param_1 < 0x142440b) {
                if (0x1424408 < param_1) {
                    return true;
                }
                if (0x1424404 < param_1) {
                    if (param_1 < 0x1424408) {
                        return true;
                    }
                    return false;
                }
                return false;
            }
            if (param_1 < 0x1e84be8) {
                return false;
            }
            if (param_1 < 0x1e84bea) {
                return true;
            }
            return false;
        }
        if (param_1 == 0x1e9f99a) {
            return true;
        }
        bVar1 = param_1 == 0x1ea20aa;
    }
    if (!bVar1) {
        return false;
    }
    return true;
}

bool is_able_notweapon_skill(int skillId) {
    return 4321002 == skillId;
}

bool is_prepare_bomb_skill(int skillId) {
    switch (skillId) {
        case 4341003:
        case 5201002:
        case 14111006:
            return true;
        default:
            return false;
    }
}

bool is_mirror_excepted_skill(int skillId) {
    switch (skillId) {
        case 4321002:
        case 4331003:
        case 4341003:
        case 4341004:
            return true;
        default:
            return false;
    }
}

bool is_damage_shared_skill(int nSkillID) {
    bool check{};
    if (nSkillID > 0x1421cf3)
    {
        if (nSkillID > 0x1424405)
        {
            if (nSkillID < 0x1424409)
            {
                label_90314a:
                return false;
            }
            if (nSkillID <= 0x142440a)
            {
                goto label_903183;
            }
            goto label_90314a;
        }
        if (nSkillID == 0x1424405)
        {
            goto label_903183;
        }
        if (nSkillID < 0x1421cf6)
        {
            goto label_90314a;
        }
        check = nSkillID <= 0x1421cf8;
    }
    else
    {
        if (nSkillID == 0x1421cf3)
        {
            label_903183:
            return true;
        }
        if (nSkillID > 0x1406f42)
        {
            if (nSkillID < 0x141f5e1)
            {
                goto label_90314a;
            }
            check = nSkillID <= 0x141f5e2;
        }
        else
        {
            if (nSkillID == 0x1406f42)
            {
                goto label_903183;
            }
            if (nSkillID == 0)
            {
                goto label_903183;
            }
            if (nSkillID <= 0x1312d0d)
            {
                goto label_90314a;
            }
            check = nSkillID <= 0x1312d10;
        }
    }
    if (check)
    {
        goto label_903183;
    }
    goto label_90314a;

}

bool is_not_prepare_bomb_skill(int skillId) {
    return skillId == 4321002;
}

bool is_shoot_skill_not_using_shooting_weapon(int skillId) {
    bool bVar1{};

    if (skillId < 0xe69360) {
        if (0xe6935d < skillId) {
            return true;
        }
        if (skillId < 0x4e23eb) {
            if (skillId == 0x4e23ea) {
                return true;
            }
            if (skillId == 0x3ee1ab) {
                return true;
            }
            bVar1 = skillId == 0x40684b;
        } else {
            bVar1 = skillId == 0x00a9634c;
        }
    } else if (skillId < 0x1424407) {
        if (skillId == 0x1424406) {
            return true;
        }
        if (skillId == 0x141f5e4) {
            return true;
        }
        bVar1 = skillId == 0x1421cf4;
    } else {
        bVar1 = skillId == 0x1f914cf;
    }
    if (bVar1) {
        return true;
    }
    return false;
}

bool is_unregisterd_skill(int skillId) {
    return skillId / 10000000 == 9;
}

int get_skill_id_from_vehicle_id(int nVehicleID) {
    switch (nVehicleID) {
        case 0x1d7ae4:
            return 0x41a;
        default:
            return 0;
        case 0x1d7ae6:
            return 0x401;
        case 0x1d7ae7:
            return 0x403;
        case 0x1d7ae8:
            return 0x404;
        case 0x1d7ae9:
            return 0x405;
        case 0x1d7aea:
            return 0x407;
        case 0x1d7aeb:
            return 0x406;
        case 0x1d7aec:
            return 0x40b;
        case 0x1d7aed:
            return 0x409;
        case 0x1d7aee:
            return 0x40a;
        case 0x1d7af1:
            return 0x40c;
        case 0x1d7af2:
            return 0x40d;
        case 0x1d7af3:
            return 0x40e;
        case 0x1d7af4:
            return 0x40f;
        case 0x1d7af5:
            return 0x410;
        case 0x1d7af6:
            return 0x412;
        case 0x1d7af7:
            return 0x414;
        case 0x1d7af9:
            return 0x419;
        case 0x1d7afa:
            return 0x41b;
        case 0x1d7afb:
            return 0x41c;
        case 0x1d7afc:
            return 0x41d;
        case 0x1d7afd:
            return 0x41e;
        case 0x1d7b02:
            return 0x427;
        case 0x1d7b03:
            return 0x428;
        case 0x1d7b05:
            return 0x429;
        case 0x1d7b06:
            return 0x42d;
        case 0x1d7b07:
            return 0x42e;
        case 0x1d7b08:
            return 0x42f;
    }
}

int get_cool_time(int skillId) {
    bool bVar1{};

    if (skillId < 0x4f837e) {
        if (0x4f837b < skillId) {
            return 0x1c2;
        }
        if (skillId < 0x406850) {
            if (skillId == 0x40684f) {
                return 200;
            }
            if (skillId < 0x2f9b8b) {
                if (skillId == 0x2f9b8a) {
                    return 0x5dc;
                }
                if (skillId == 0x111ae9) {
                    return 500;
                }
                if (skillId == 0x142829) {
                    return 500;
                }
                if (skillId != 0x2f514b) {
                    return 0;
                }
            } else if (skillId != 0x30d7eb) {
                if (skillId == 0x3d0ceb) {
                    return 1000;
                }
                if (skillId == 0x3ee1b0) {
                    return 500;
                }
                return 0;
            }
            return 400;
        }
        if (skillId < 0x4e23f0) {
            if (skillId == 0x4e23ef) {
                return 200;
            }
            if (skillId == 0x41eeea) {
                return 1000;
            }
            if (skillId == 0x423d0b) {
                return 2000;
            }
            if (skillId == 0x4e23ed) {
                return 500;
            }
            return 0;
        }
        if (skillId == 0x4f5c6a) {
            return 1000;
        }
        bVar1 = skillId == 0x4f5c6e;
    } else if (skillId < 0x1c9c7ad) {
        if (skillId == 0x1c9c7ac) {
            return 1000;
        }
        if (skillId < 0xe6935d) {
            if (skillId == 0xe6935c) {
                return 200;
            }
            if (skillId == 0xa9634d) {
                return 0x5dc;
            }
            if (skillId == 0xc7e7cd) {
                return 400;
            }
            if (skillId == 0x00d7511e) {
                return 0x5dc;
            }
            return 0;
        }
        if (skillId == 0x1407329) {
            return 1000;
        }
        bVar1 = skillId == 0x151d849;
    } else {
        if (skillId < 0x1f962ee) {
            if (skillId == 0x1f962ed) {
                return 1000;
            }
            if (skillId == 0x1e9d289) {
                return 500;
            }
            if (skillId == 0x1e9f9a3) {
                return 500;
            }
            if (skillId != 0x1f914ca) {
                return 0;
            }
            return 400;
        }
        if (skillId == 0x21612a9) {
            return 1000;
        }
        bVar1 = skillId == 0x2179951;
    }
    if (!bVar1) {
        return 0;
    }
    return 1000;
}

int get_dragon_action_code_from_name(Ztl_bstr_t bsName) {
    //TODO 004baaf0
    UNIMPLEMENTED;
}

int32_t get_random_shoot_attack_action(int32_t nAttackActionType, int32_t nWT, const SKILLENTRY *pSkill, int32_t nSLV,
                                       uint32_t nRandNumber) {
    // 0070b7a0
    UNIMPLEMENTED;
}


bool __cdecl is_nonslot_skill(long skillId)
{
  if (skillId < 0x131312c) {
    if (skillId < 0x131312a) {
      if (skillId < 0x41eee9) {
        if ((skillId != 0x41eee8) && ((skillId < 0x42a || (0x42b < skillId)))) {
          return false;
        }
      }
      else {
        if (skillId < 0x989aaa) {
          return false;
        }
        if (0x989aab < skillId) {
          return false;
        }
      }
    }
  }
  else if (skillId < 0x1c9c7ac) {
    if (skillId < 0x1c9c7aa) {
      if (skillId < 0x131583a) {
        return false;
      }
      if (0x131583b < skillId) {
        return false;
      }
    }
  }
  else if (skillId != 0x1f78e2a) {
    return false;
  }
  return true;
}