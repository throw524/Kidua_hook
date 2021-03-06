#pragma once

#include "sdk.h"

class CGameMovement
{
public:
	void ProcessMovement( CBaseEntity *pPlayer, PVOID moveData )
	{
		typedef void( __thiscall* OriginalFn )( PVOID, CBaseEntity *pPlayer, PVOID moveData );
		getvfunc<OriginalFn>( this, 1 )( this, pPlayer, moveData );
	}
	void StartTrackPredictionErrors( CBaseEntity* pPlayer )
	{
		typedef void( __thiscall* OriginalFn )( PVOID, CBaseEntity *pPlayer );
		getvfunc<OriginalFn>( this, 3 )( this, pPlayer );

	}
	void FinishTrackPredictionErrors( CBaseEntity* pPlayer )
	{
		typedef void( __thiscall* OriginalFn )( PVOID, CBaseEntity *pPlayer );
		getvfunc<OriginalFn>( this, 4 )( this, pPlayer );
	}
};

extern CGameMovement* g_pGameMovement;