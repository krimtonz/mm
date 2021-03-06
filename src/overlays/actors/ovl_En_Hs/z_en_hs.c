#include "z_en_hs.h"

#define FLAGS 0x00000019

#define THIS ((EnHs*)thisx)

void EnHs_Init(Actor* thisx, GlobalContext* globalCtx);
void EnHs_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnHs_Update(Actor* thisx, GlobalContext* globalCtx);
void EnHs_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Hs_InitVars = {
    ACTOR_EN_HS,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_HS,
    sizeof(EnHs),
    (ActorFunc)EnHs_Init,
    (ActorFunc)EnHs_Destroy,
    (ActorFunc)EnHs_Update,
    (ActorFunc)EnHs_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80952C50.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/EnHs_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/EnHs_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80952DFC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80952E50.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80952F00.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80952FE0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80953098.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80953180.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_809532C0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_809532D0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80953354.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_809533A0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_8095345C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/EnHs_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_8095376C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/func_80953848.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hs_0x80952C50/EnHs_Draw.asm")
