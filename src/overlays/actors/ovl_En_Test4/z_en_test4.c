#include "z_en_test4.h"

#define FLAGS 0x00100030

#define THIS ((EnTest4*)thisx)

void EnTest4_Init(Actor* thisx, GlobalContext* globalCtx);
void EnTest4_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnTest4_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Test4_InitVars = {
    ACTOR_EN_TEST4,
    ACTORTYPE_SWITCH,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnTest4),
    (ActorFunc)EnTest4_Init,
    (ActorFunc)EnTest4_Destroy,
    (ActorFunc)EnTest4_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A41D70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A41FA4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A42198.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A425E4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/EnTest4_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/EnTest4_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A42AB8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A42F20.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A430C8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A431C8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/func_80A4323C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Test4_0x80A41D70/EnTest4_Update.asm")
