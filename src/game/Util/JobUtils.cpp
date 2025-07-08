#include <array>
#include "JobUtils.hpp"

int get_shadow_parter_skillid(int job) {
    std::array<int, 4> shadowPartnerSkills{
            0x404140,
            0x3eba9a,
            0xd75118,
            0x4215fa,
    };
    for(auto skill : shadowPartnerSkills) {
        if(is_correct_job_for_skill_root(job, skill)) {
            return skill;
        }
    }
    return 0;
}

long get_dualjob_change_level(long param_1) {
    switch(param_1) {
        case 400:
            return 10;
        default:
            return 200;
        case 0x1ae:
            return 0x14;
        case 0x1af:
            return 0x1e;
        case 0x1b0:
            return 0x37;
        case 0x1b1:
            return 0x46;
        case 0x1b2:
            return 0x78;
    }
}

long pronstab_action_convert_for_jaguar(long action, long ridingVehicle) {
    static std::array<int, 6> RIDING_WILDHUNTER_JAGUAR = {
            1932015,
            1932030,
            1932031,
            1932032,
            1932033,
            1932036

    };
    if ((ridingVehicle == 1932016) && (action == 0x29)) {
        return -1;
    }

    for(auto id: RIDING_WILDHUNTER_JAGUAR) {
        if(id == ridingVehicle) {
            return action == 0x29 ? 0x39 : action;
        }
    }
    return action;
}

int get_mechanic_mastery(CharacterData *cd) {
    //TODO 0070a0c0
    return 0; // TODO
}

long get_increase_speed(CharacterData *param_1) {
    //TODO 0070ab30
    return 0;
}

bool is_beginner_job(int job) {
    // TODO
    return job / 1000 == 0;
}

bool is_extendsp_job(long param_1) {
    if (((param_1 / 1000 != 3) && (param_1 / 100 != 0x16)) && (param_1 != 0x7d1)) {
        return false;
    }
    return true;
}

long get_job_level(long param_1) {
    int iVar1;
    int iVar2;

    if ((param_1 == (param_1 / 100) * 100) || (param_1 == 0x7d1)) {
        return 1;
    }
    if (param_1 / 10 == 0x2b) {
        iVar2 = (param_1 + -0x1ae) / 2;
    } else {
        iVar2 = param_1 % 10;
    }
    iVar2 = iVar2 + 2;
    if (1 < iVar2) {
        if (iVar2 < 5) {
            return iVar2;
        }
        if ((iVar2 < 0xb) && (iVar1 = is_evan_job(param_1), iVar1 != 0)) {
            return iVar2;
        }
    }
    return 0;
}

bool is_third_job(int job) {
    return (job / 0x3e8) == 2;
}

bool is_mage_job(int job) {
    switch(job) {
        case 2:
        case 0xc:
        case 0x16:
        case 0x20:
            return true;
        default:
            return false;
    }
}

bool is_bmage_job(int jobId) {
    return (jobId / 100) == 32;
}

bool is_wildhunter_job(int jobId) {
    return (jobId / 100) == 33;
}

bool is_cygnus_job(int jobId) {
    return (jobId / 1000) == 1;
}

bool is_aran_job(int jobId) {
    return (jobId / 100) == 21 || jobId == 2000;
}

bool is_mechanic_job(int jobId) {
    return (jobId / 100) == 35;
}

int get_job_category(int job) {
    return (job % 1000) / 100;
}

bool is_resistance_job(int job) {
    return (job / 1000) == 3;
}

int __fastcall GetJobCategory(int job) {
    return ((job % 1000) / 100);
}

int __fastcall   __get_dragon_idx(int job) {
    if (job == 2200) {
        return 0;
    }
    if ((job - 2210) > 8) {
        return -1;
    }

    return (job % 10) + 1;
}

bool is_correct_job_for_skill_root(int job, int skillRoot) {
    if (skillRoot == (skillRoot / 100) * 100) {
        return skillRoot / 100 == job / 100;
    }
    if ((skillRoot / 10 == job / 10) && (skillRoot % 10 <= job % 10)) {
        return true;
    }
    return false;
}

bool is_admin_job(int nJob) {
    return ((nJob % 1000) / 100) == 9;
}

bool is_manager_job(int nJob) {
    return ((nJob % 1000) / 100) == 8;
}

bool is_evan_job(int job) {
    return (job / 100) != 22 || job == 2001;
}

bool is_dual_job(int job) {
    return job / 10 == 0x2b;
}
