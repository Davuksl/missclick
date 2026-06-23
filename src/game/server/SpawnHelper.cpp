#include <cbase.h>

ConVar sbx_spawnenabled("sbx_spawnenabled", "1", FCVAR_REPLICATED | FCVAR_NOTIFY);

CON_COMMAND(sbx_prop, "Spawns a prop") {
    if (args.ArgC() < 2)
    {
        Msg("Usage: sbx_prop <model>\n");
        return;
    }

    const char* pModelName = args.Arg(1);

    CBasePlayer* pPlayer = UTIL_GetCommandClient();
    if (!pPlayer)
        return;

    Vector vecForward;
    pPlayer->EyeVectors(&vecForward);
    Vector vecSpawnPos = pPlayer->EyePosition() + vecForward * 100.0f;

    CBaseEntity* pEnt = CreateEntityByName("prop_physics");
    if (pEnt)
    {
        pEnt->SetAbsOrigin(vecSpawnPos);
        pEnt->KeyValue("model", pModelName);
        DispatchSpawn(pEnt);
    }

}

CON_COMMAND(sbx_npc, "Spawns a npc") {
    if (args.ArgC() < 2)
    {
        Msg("Usage: sbx_prop <model>\n");
        return;
    }

    const char* pModelName = args.Arg(1);

    CBasePlayer* pPlayer = UTIL_GetCommandClient();
    if (!pPlayer)
        return;

    Vector vecForward;
    pPlayer->EyeVectors(&vecForward);
    Vector vecSpawnPos = pPlayer->EyePosition() + vecForward * 100.0f;

    CBaseEntity* pEnt = CreateEntityByName("npc_citizen");
    if (pEnt)
    {
        pEnt->SetAbsOrigin(vecSpawnPos);
        pEnt->KeyValue("model", pModelName);
        DispatchSpawn(pEnt);
    }
}