// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "gamerules.h"
#include "multiplay_gamerules.h"
#include "singleplay_gamerules.h"
#include "teamplay_gamerules.h"
#include "srcpy_gamerules.h"
#include "ammodef.h"
#include "takedamageinfo.h"
#include "hl2mp/hl2mp_gamerules.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "CGameRules.pypp.hpp"

namespace bp = boost::python;

struct C_GameRules_wrapper : C_GameRules, bp::wrapper< C_GameRules > {

    C_GameRules_wrapper( )
    : C_GameRules( )
      , bp::wrapper< C_GameRules >(){
        // null constructor
    
    }

    virtual bool AllowMapParticleEffect( char const * pszParticleEffect ) {
        PY_OVERRIDE_CHECK( C_GameRules, AllowMapParticleEffect )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, AllowMapParticleEffect )
        bp::override func_AllowMapParticleEffect = this->get_override( "AllowMapParticleEffect" );
        if( func_AllowMapParticleEffect.ptr() != Py_None )
            try {
                return func_AllowMapParticleEffect( pszParticleEffect );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::AllowMapParticleEffect( pszParticleEffect );
            }
        else
            return this->C_GameRules::AllowMapParticleEffect( pszParticleEffect );
    }
    
    bool default_AllowMapParticleEffect( char const * pszParticleEffect ) {
        return C_GameRules::AllowMapParticleEffect( pszParticleEffect );
    }

    virtual bool AllowMapVisionFilterShaders(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, AllowMapVisionFilterShaders )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, AllowMapVisionFilterShaders )
        bp::override func_AllowMapVisionFilterShaders = this->get_override( "AllowMapVisionFilterShaders" );
        if( func_AllowMapVisionFilterShaders.ptr() != Py_None )
            try {
                return func_AllowMapVisionFilterShaders(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::AllowMapVisionFilterShaders(  );
            }
        else
            return this->C_GameRules::AllowMapVisionFilterShaders(  );
    }
    
    bool default_AllowMapVisionFilterShaders(  ) {
        return C_GameRules::AllowMapVisionFilterShaders( );
    }

    virtual bool AllowThirdPersonCamera(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, AllowThirdPersonCamera )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, AllowThirdPersonCamera )
        bp::override func_AllowThirdPersonCamera = this->get_override( "AllowThirdPersonCamera" );
        if( func_AllowThirdPersonCamera.ptr() != Py_None )
            try {
                return func_AllowThirdPersonCamera(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::AllowThirdPersonCamera(  );
            }
        else
            return this->C_GameRules::AllowThirdPersonCamera(  );
    }
    
    bool default_AllowThirdPersonCamera(  ) {
        return C_GameRules::AllowThirdPersonCamera( );
    }

    virtual bool AllowWeatherParticles(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, AllowWeatherParticles )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, AllowWeatherParticles )
        bp::override func_AllowWeatherParticles = this->get_override( "AllowWeatherParticles" );
        if( func_AllowWeatherParticles.ptr() != Py_None )
            try {
                return func_AllowWeatherParticles(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::AllowWeatherParticles(  );
            }
        else
            return this->C_GameRules::AllowWeatherParticles(  );
    }
    
    bool default_AllowWeatherParticles(  ) {
        return C_GameRules::AllowWeatherParticles( );
    }

    virtual void ClientCommandKeyValues( ::edict_t * pEntity, ::KeyValues * pKeyValues ) {
        PY_OVERRIDE_CHECK( C_GameRules, ClientCommandKeyValues )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, ClientCommandKeyValues )
        bp::override func_ClientCommandKeyValues = this->get_override( "ClientCommandKeyValues" );
        if( func_ClientCommandKeyValues.ptr() != Py_None )
            try {
                func_ClientCommandKeyValues( boost::python::ptr(pEntity), boost::python::ptr(pKeyValues) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_GameRules::ClientCommandKeyValues( pEntity, pKeyValues );
            }
        else
            this->C_GameRules::ClientCommandKeyValues( pEntity, pKeyValues );
    }
    
    void default_ClientCommandKeyValues( ::edict_t * pEntity, ::KeyValues * pKeyValues ) {
        C_GameRules::ClientCommandKeyValues( pEntity, pKeyValues );
    }

    virtual void ClientSpawned( ::edict_t * pPlayer ) {
        PY_OVERRIDE_CHECK( C_GameRules, ClientSpawned )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, ClientSpawned )
        bp::override func_ClientSpawned = this->get_override( "ClientSpawned" );
        if( func_ClientSpawned.ptr() != Py_None )
            try {
                func_ClientSpawned( boost::python::ptr(pPlayer) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_GameRules::ClientSpawned( pPlayer );
            }
        else
            this->C_GameRules::ClientSpawned( pPlayer );
    }
    
    void default_ClientSpawned( ::edict_t * pPlayer ) {
        C_GameRules::ClientSpawned( pPlayer );
    }

    virtual int Damage_GetNoPhysicsForce(  ){
        bp::override func_Damage_GetNoPhysicsForce = this->get_override( "Damage_GetNoPhysicsForce" );
        try {
            return func_Damage_GetNoPhysicsForce(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual int Damage_GetShouldGibCorpse(  ){
        bp::override func_Damage_GetShouldGibCorpse = this->get_override( "Damage_GetShouldGibCorpse" );
        try {
            return func_Damage_GetShouldGibCorpse(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual int Damage_GetShouldNotBleed(  ){
        bp::override func_Damage_GetShouldNotBleed = this->get_override( "Damage_GetShouldNotBleed" );
        try {
            return func_Damage_GetShouldNotBleed(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual int Damage_GetShowOnHud(  ){
        bp::override func_Damage_GetShowOnHud = this->get_override( "Damage_GetShowOnHud" );
        try {
            return func_Damage_GetShowOnHud(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual int Damage_GetTimeBased(  ){
        bp::override func_Damage_GetTimeBased = this->get_override( "Damage_GetTimeBased" );
        try {
            return func_Damage_GetTimeBased(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual bool Damage_IsTimeBased( int iDmgType ){
        bp::override func_Damage_IsTimeBased = this->get_override( "Damage_IsTimeBased" );
        try {
            return func_Damage_IsTimeBased( iDmgType );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual bool Damage_NoPhysicsForce( int iDmgType ){
        bp::override func_Damage_NoPhysicsForce = this->get_override( "Damage_NoPhysicsForce" );
        try {
            return func_Damage_NoPhysicsForce( iDmgType );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual bool Damage_ShouldGibCorpse( int iDmgType ){
        bp::override func_Damage_ShouldGibCorpse = this->get_override( "Damage_ShouldGibCorpse" );
        try {
            return func_Damage_ShouldGibCorpse( iDmgType );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual bool Damage_ShouldNotBleed( int iDmgType ){
        bp::override func_Damage_ShouldNotBleed = this->get_override( "Damage_ShouldNotBleed" );
        try {
            return func_Damage_ShouldNotBleed( iDmgType );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual bool Damage_ShowOnHUD( int iDmgType ){
        bp::override func_Damage_ShowOnHUD = this->get_override( "Damage_ShowOnHUD" );
        try {
            return func_Damage_ShowOnHUD( iDmgType );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual int DefaultFOV(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, DefaultFOV )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, DefaultFOV )
        bp::override func_DefaultFOV = this->get_override( "DefaultFOV" );
        if( func_DefaultFOV.ptr() != Py_None )
            try {
                return func_DefaultFOV(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::DefaultFOV(  );
            }
        else
            return this->C_GameRules::DefaultFOV(  );
    }
    
    int default_DefaultFOV(  ) {
        return C_GameRules::DefaultFOV( );
    }

    virtual float GetDamageMultiplier(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, GetDamageMultiplier )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, GetDamageMultiplier )
        bp::override func_GetDamageMultiplier = this->get_override( "GetDamageMultiplier" );
        if( func_GetDamageMultiplier.ptr() != Py_None )
            try {
                return func_GetDamageMultiplier(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::GetDamageMultiplier(  );
            }
        else
            return this->C_GameRules::GetDamageMultiplier(  );
    }
    
    float default_GetDamageMultiplier(  ) {
        return C_GameRules::GetDamageMultiplier( );
    }

    virtual int GetGameType(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, GetGameType )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, GetGameType )
        bp::override func_GetGameType = this->get_override( "GetGameType" );
        if( func_GetGameType.ptr() != Py_None )
            try {
                return func_GetGameType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::GetGameType(  );
            }
        else
            return this->C_GameRules::GetGameType(  );
    }
    
    int default_GetGameType(  ) {
        return C_GameRules::GetGameType( );
    }

    virtual char const * GetGameTypeName(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, GetGameTypeName )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, GetGameTypeName )
        bp::override func_GetGameTypeName = this->get_override( "GetGameTypeName" );
        if( func_GetGameTypeName.ptr() != Py_None )
            try {
                return func_GetGameTypeName(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::GetGameTypeName(  );
            }
        else
            return this->C_GameRules::GetGameTypeName(  );
    }
    
    char const * default_GetGameTypeName(  ) {
        return C_GameRules::GetGameTypeName( );
    }

    virtual ::C_BaseCombatWeapon * GetNextBestWeapon( ::C_BaseCombatCharacter * pPlayer, ::C_BaseCombatWeapon * pCurrentWeapon ) {
        PY_OVERRIDE_CHECK( C_GameRules, GetNextBestWeapon )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, GetNextBestWeapon )
        bp::override func_GetNextBestWeapon = this->get_override( "GetNextBestWeapon" );
        if( func_GetNextBestWeapon.ptr() != Py_None )
            try {
                return func_GetNextBestWeapon( pPlayer ? pPlayer->GetPyHandle() : boost::python::object(), pCurrentWeapon ? pCurrentWeapon->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::GetNextBestWeapon( pPlayer, pCurrentWeapon );
            }
        else
            return this->C_GameRules::GetNextBestWeapon( pPlayer, pCurrentWeapon );
    }
    
    ::C_BaseCombatWeapon * default_GetNextBestWeapon( ::C_BaseCombatCharacter * pPlayer, ::C_BaseCombatWeapon * pCurrentWeapon ) {
        return C_GameRules::GetNextBestWeapon( pPlayer, pCurrentWeapon );
    }

    virtual bool InRoundRestart(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, InRoundRestart )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, InRoundRestart )
        bp::override func_InRoundRestart = this->get_override( "InRoundRestart" );
        if( func_InRoundRestart.ptr() != Py_None )
            try {
                return func_InRoundRestart(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::InRoundRestart(  );
            }
        else
            return this->C_GameRules::InRoundRestart(  );
    }
    
    bool default_InRoundRestart(  ) {
        return C_GameRules::InRoundRestart( );
    }

    virtual void InitGamerules(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, InitGamerules )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, InitGamerules )
        bp::override func_InitGamerules = this->get_override( "InitGamerules" );
        if( func_InitGamerules.ptr() != Py_None )
            try {
                func_InitGamerules(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_GameRules::InitGamerules(  );
            }
        else
            this->C_GameRules::InitGamerules(  );
    }
    
    void default_InitGamerules(  ) {
        C_GameRules::InitGamerules( );
    }

    virtual bool IsBonusChallengeTimeBased(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, IsBonusChallengeTimeBased )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, IsBonusChallengeTimeBased )
        bp::override func_IsBonusChallengeTimeBased = this->get_override( "IsBonusChallengeTimeBased" );
        if( func_IsBonusChallengeTimeBased.ptr() != Py_None )
            try {
                return func_IsBonusChallengeTimeBased(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::IsBonusChallengeTimeBased(  );
            }
        else
            return this->C_GameRules::IsBonusChallengeTimeBased(  );
    }
    
    bool default_IsBonusChallengeTimeBased(  ) {
        return C_GameRules::IsBonusChallengeTimeBased( );
    }

    virtual bool IsConnectedUserInfoChangeAllowed( ::C_BasePlayer * pPlayer ) {
        PY_OVERRIDE_CHECK( C_GameRules, IsConnectedUserInfoChangeAllowed )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, IsConnectedUserInfoChangeAllowed )
        bp::override func_IsConnectedUserInfoChangeAllowed = this->get_override( "IsConnectedUserInfoChangeAllowed" );
        if( func_IsConnectedUserInfoChangeAllowed.ptr() != Py_None )
            try {
                return func_IsConnectedUserInfoChangeAllowed( pPlayer ? pPlayer->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::IsConnectedUserInfoChangeAllowed( pPlayer );
            }
        else
            return this->C_GameRules::IsConnectedUserInfoChangeAllowed( pPlayer );
    }
    
    bool default_IsConnectedUserInfoChangeAllowed( ::C_BasePlayer * pPlayer ) {
        return C_GameRules::IsConnectedUserInfoChangeAllowed( pPlayer );
    }

    virtual bool IsHolidayActive( int eHoliday ) const  {
        PY_OVERRIDE_CHECK( C_GameRules, IsHolidayActive )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, IsHolidayActive )
        bp::override func_IsHolidayActive = this->get_override( "IsHolidayActive" );
        if( func_IsHolidayActive.ptr() != Py_None )
            try {
                return func_IsHolidayActive( eHoliday );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::IsHolidayActive( eHoliday );
            }
        else
            return this->C_GameRules::IsHolidayActive( eHoliday );
    }
    
    bool default_IsHolidayActive( int eHoliday ) const  {
        return C_GameRules::IsHolidayActive( eHoliday );
    }

    virtual bool IsLocalPlayer( int nEntIndex ) {
        PY_OVERRIDE_CHECK( C_GameRules, IsLocalPlayer )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, IsLocalPlayer )
        bp::override func_IsLocalPlayer = this->get_override( "IsLocalPlayer" );
        if( func_IsLocalPlayer.ptr() != Py_None )
            try {
                return func_IsLocalPlayer( nEntIndex );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::IsLocalPlayer( nEntIndex );
            }
        else
            return this->C_GameRules::IsLocalPlayer( nEntIndex );
    }
    
    bool default_IsLocalPlayer( int nEntIndex ) {
        return C_GameRules::IsLocalPlayer( nEntIndex );
    }

    virtual bool IsManualMapChangeOkay( char const * * pszReason ) {
        PY_OVERRIDE_CHECK( C_GameRules, IsManualMapChangeOkay )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, IsManualMapChangeOkay )
        bp::override func_IsManualMapChangeOkay = this->get_override( "IsManualMapChangeOkay" );
        if( func_IsManualMapChangeOkay.ptr() != Py_None )
            try {
                return func_IsManualMapChangeOkay( pszReason );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::IsManualMapChangeOkay( pszReason );
            }
        else
            return this->C_GameRules::IsManualMapChangeOkay( pszReason );
    }
    
    bool default_IsManualMapChangeOkay( char const * * pszReason ) {
        return C_GameRules::IsManualMapChangeOkay( pszReason );
    }

    virtual bool IsMultiplayer(  ){
        bp::override func_IsMultiplayer = this->get_override( "IsMultiplayer" );
        try {
            return func_IsMultiplayer(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void ModifySentChat( char * pBuf, int iBufSize ) {
        PY_OVERRIDE_CHECK( C_GameRules, ModifySentChat )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, ModifySentChat )
        bp::override func_ModifySentChat = this->get_override( "ModifySentChat" );
        if( func_ModifySentChat.ptr() != Py_None )
            try {
                func_ModifySentChat( pBuf, iBufSize );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_GameRules::ModifySentChat( pBuf, iBufSize );
            }
        else
            this->C_GameRules::ModifySentChat( pBuf, iBufSize );
    }
    
    void default_ModifySentChat( char * pBuf, int iBufSize ) {
        C_GameRules::ModifySentChat( pBuf, iBufSize );
    }

    virtual char const * Name(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, Name )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, Name )
        bp::override func_Name = this->get_override( "Name" );
        if( func_Name.ptr() != Py_None )
            try {
                return func_Name(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::Name(  );
            }
        else
            return this->C_GameRules::Name(  );
    }
    
    char const * default_Name(  ) {
        return C_GameRules::Name( );
    }

    virtual void OnFileReceived( char const * fileName, unsigned int transferID ) {
        PY_OVERRIDE_CHECK( C_GameRules, OnFileReceived )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, OnFileReceived )
        bp::override func_OnFileReceived = this->get_override( "OnFileReceived" );
        if( func_OnFileReceived.ptr() != Py_None )
            try {
                func_OnFileReceived( fileName, transferID );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_GameRules::OnFileReceived( fileName, transferID );
            }
        else
            this->C_GameRules::OnFileReceived( fileName, transferID );
    }
    
    void default_OnFileReceived( char const * fileName, unsigned int transferID ) {
        C_GameRules::OnFileReceived( fileName, transferID );
    }

    virtual bool ShouldDrawHeadLabels(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, ShouldDrawHeadLabels )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, ShouldDrawHeadLabels )
        bp::override func_ShouldDrawHeadLabels = this->get_override( "ShouldDrawHeadLabels" );
        if( func_ShouldDrawHeadLabels.ptr() != Py_None )
            try {
                return func_ShouldDrawHeadLabels(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::ShouldDrawHeadLabels(  );
            }
        else
            return this->C_GameRules::ShouldDrawHeadLabels(  );
    }
    
    bool default_ShouldDrawHeadLabels(  ) {
        return C_GameRules::ShouldDrawHeadLabels( );
    }

    virtual bool ShouldWarnOfAbandonOnQuit(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, ShouldWarnOfAbandonOnQuit )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, ShouldWarnOfAbandonOnQuit )
        bp::override func_ShouldWarnOfAbandonOnQuit = this->get_override( "ShouldWarnOfAbandonOnQuit" );
        if( func_ShouldWarnOfAbandonOnQuit.ptr() != Py_None )
            try {
                return func_ShouldWarnOfAbandonOnQuit(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::ShouldWarnOfAbandonOnQuit(  );
            }
        else
            return this->C_GameRules::ShouldWarnOfAbandonOnQuit(  );
    }
    
    bool default_ShouldWarnOfAbandonOnQuit(  ) {
        return C_GameRules::ShouldWarnOfAbandonOnQuit( );
    }

    virtual void ShutdownGamerules(  ) {
        PY_OVERRIDE_CHECK( C_GameRules, ShutdownGamerules )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, ShutdownGamerules )
        bp::override func_ShutdownGamerules = this->get_override( "ShutdownGamerules" );
        if( func_ShutdownGamerules.ptr() != Py_None )
            try {
                func_ShutdownGamerules(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_GameRules::ShutdownGamerules(  );
            }
        else
            this->C_GameRules::ShutdownGamerules(  );
    }
    
    void default_ShutdownGamerules(  ) {
        C_GameRules::ShutdownGamerules( );
    }

    virtual bool SwitchToNextBestWeapon( ::C_BaseCombatCharacter * pPlayer, ::C_BaseCombatWeapon * pCurrentWeapon ) {
        PY_OVERRIDE_CHECK( C_GameRules, SwitchToNextBestWeapon )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, SwitchToNextBestWeapon )
        bp::override func_SwitchToNextBestWeapon = this->get_override( "SwitchToNextBestWeapon" );
        if( func_SwitchToNextBestWeapon.ptr() != Py_None )
            try {
                return func_SwitchToNextBestWeapon( pPlayer ? pPlayer->GetPyHandle() : boost::python::object(), pCurrentWeapon ? pCurrentWeapon->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::SwitchToNextBestWeapon( pPlayer, pCurrentWeapon );
            }
        else
            return this->C_GameRules::SwitchToNextBestWeapon( pPlayer, pCurrentWeapon );
    }
    
    bool default_SwitchToNextBestWeapon( ::C_BaseCombatCharacter * pPlayer, ::C_BaseCombatWeapon * pCurrentWeapon ) {
        return C_GameRules::SwitchToNextBestWeapon( pPlayer, pCurrentWeapon );
    }

    virtual char const * TranslateEffectForVisionFilter( char const * pchEffectType, char const * pchEffectName ) {
        PY_OVERRIDE_CHECK( C_GameRules, TranslateEffectForVisionFilter )
        PY_OVERRIDE_LOG( _gamerules, C_GameRules, TranslateEffectForVisionFilter )
        bp::override func_TranslateEffectForVisionFilter = this->get_override( "TranslateEffectForVisionFilter" );
        if( func_TranslateEffectForVisionFilter.ptr() != Py_None )
            try {
                return func_TranslateEffectForVisionFilter( pchEffectType, pchEffectName );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_GameRules::TranslateEffectForVisionFilter( pchEffectType, pchEffectName );
            }
        else
            return this->C_GameRules::TranslateEffectForVisionFilter( pchEffectType, pchEffectName );
    }
    
    char const * default_TranslateEffectForVisionFilter( char const * pchEffectType, char const * pchEffectName ) {
        return C_GameRules::TranslateEffectForVisionFilter( pchEffectType, pchEffectName );
    }

};

void register_CGameRules_class(){

    bp::class_< C_GameRules_wrapper, boost::noncopyable >( "CGameRules", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "AllowMapParticleEffect"
            , (bool ( ::C_GameRules::* )( char const * ))(&::C_GameRules::AllowMapParticleEffect)
            , (bool ( C_GameRules_wrapper::* )( char const * ))(&C_GameRules_wrapper::default_AllowMapParticleEffect)
            , ( bp::arg("pszParticleEffect") ) )    
        .def( 
            "AllowMapVisionFilterShaders"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::AllowMapVisionFilterShaders)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_AllowMapVisionFilterShaders) )    
        .def( 
            "AllowThirdPersonCamera"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::AllowThirdPersonCamera)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_AllowThirdPersonCamera) )    
        .def( 
            "AllowWeatherParticles"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::AllowWeatherParticles)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_AllowWeatherParticles) )    
        .def( 
            "ClientCommandKeyValues"
            , (void ( ::C_GameRules::* )( ::edict_t *,::KeyValues * ))(&::C_GameRules::ClientCommandKeyValues)
            , (void ( C_GameRules_wrapper::* )( ::edict_t *,::KeyValues * ))(&C_GameRules_wrapper::default_ClientCommandKeyValues)
            , ( bp::arg("pEntity"), bp::arg("pKeyValues") ) )    
        .def( 
            "ClientSpawned"
            , (void ( ::C_GameRules::* )( ::edict_t * ))(&::C_GameRules::ClientSpawned)
            , (void ( C_GameRules_wrapper::* )( ::edict_t * ))(&C_GameRules_wrapper::default_ClientSpawned)
            , ( bp::arg("pPlayer") ) )    
        .def( 
            "Damage_GetNoPhysicsForce"
            , bp::pure_virtual( (int ( ::C_GameRules::* )(  ))(&::C_GameRules::Damage_GetNoPhysicsForce) ) )    
        .def( 
            "Damage_GetShouldGibCorpse"
            , bp::pure_virtual( (int ( ::C_GameRules::* )(  ))(&::C_GameRules::Damage_GetShouldGibCorpse) ) )    
        .def( 
            "Damage_GetShouldNotBleed"
            , bp::pure_virtual( (int ( ::C_GameRules::* )(  ))(&::C_GameRules::Damage_GetShouldNotBleed) ) )    
        .def( 
            "Damage_GetShowOnHud"
            , bp::pure_virtual( (int ( ::C_GameRules::* )(  ))(&::C_GameRules::Damage_GetShowOnHud) ) )    
        .def( 
            "Damage_GetTimeBased"
            , bp::pure_virtual( (int ( ::C_GameRules::* )(  ))(&::C_GameRules::Damage_GetTimeBased) ) )    
        .def( 
            "Damage_IsTimeBased"
            , bp::pure_virtual( (bool ( ::C_GameRules::* )( int ))(&::C_GameRules::Damage_IsTimeBased) )
            , ( bp::arg("iDmgType") ) )    
        .def( 
            "Damage_NoPhysicsForce"
            , bp::pure_virtual( (bool ( ::C_GameRules::* )( int ))(&::C_GameRules::Damage_NoPhysicsForce) )
            , ( bp::arg("iDmgType") ) )    
        .def( 
            "Damage_ShouldGibCorpse"
            , bp::pure_virtual( (bool ( ::C_GameRules::* )( int ))(&::C_GameRules::Damage_ShouldGibCorpse) )
            , ( bp::arg("iDmgType") ) )    
        .def( 
            "Damage_ShouldNotBleed"
            , bp::pure_virtual( (bool ( ::C_GameRules::* )( int ))(&::C_GameRules::Damage_ShouldNotBleed) )
            , ( bp::arg("iDmgType") ) )    
        .def( 
            "Damage_ShowOnHUD"
            , bp::pure_virtual( (bool ( ::C_GameRules::* )( int ))(&::C_GameRules::Damage_ShowOnHUD) )
            , ( bp::arg("iDmgType") ) )    
        .def( 
            "DefaultFOV"
            , (int ( ::C_GameRules::* )(  ))(&::C_GameRules::DefaultFOV)
            , (int ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_DefaultFOV) )    
        .def( 
            "GetAmmoDamage"
            , (float ( ::C_GameRules::* )( ::C_BaseEntity *,::C_BaseEntity *,int ))( &::C_GameRules::GetAmmoDamage )
            , ( bp::arg("pAttacker"), bp::arg("pVictim"), bp::arg("nAmmoType") ) )    
        .def( 
            "GetDamageMultiplier"
            , (float ( ::C_GameRules::* )(  ))(&::C_GameRules::GetDamageMultiplier)
            , (float ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_GetDamageMultiplier) )    
        .def( 
            "GetGameType"
            , (int ( ::C_GameRules::* )(  ))(&::C_GameRules::GetGameType)
            , (int ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_GetGameType) )    
        .def( 
            "GetGameTypeName"
            , (char const * ( ::C_GameRules::* )(  ))(&::C_GameRules::GetGameTypeName)
            , (char const * ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_GetGameTypeName) )    
        .def( 
            "GetNextBestWeapon"
            , (::C_BaseCombatWeapon * ( ::C_GameRules::* )( ::C_BaseCombatCharacter *,::C_BaseCombatWeapon * ))(&::C_GameRules::GetNextBestWeapon)
            , (::C_BaseCombatWeapon * ( C_GameRules_wrapper::* )( ::C_BaseCombatCharacter *,::C_BaseCombatWeapon * ))(&C_GameRules_wrapper::default_GetNextBestWeapon)
            , ( bp::arg("pPlayer"), bp::arg("pCurrentWeapon") )
            , bp::return_value_policy< bp::return_by_value >() )    
        .def( 
            "InRoundRestart"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::InRoundRestart)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_InRoundRestart) )    
        .def( 
            "InitGamerules"
            , (void ( ::C_GameRules::* )(  ))(&::C_GameRules::InitGamerules)
            , (void ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_InitGamerules) )    
        .def( 
            "IsBonusChallengeTimeBased"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::IsBonusChallengeTimeBased)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_IsBonusChallengeTimeBased) )    
        .def( 
            "IsConnectedUserInfoChangeAllowed"
            , (bool ( ::C_GameRules::* )( ::C_BasePlayer * ))(&::C_GameRules::IsConnectedUserInfoChangeAllowed)
            , (bool ( C_GameRules_wrapper::* )( ::C_BasePlayer * ))(&C_GameRules_wrapper::default_IsConnectedUserInfoChangeAllowed)
            , ( bp::arg("pPlayer") ) )    
        .def( 
            "IsHolidayActive"
            , (bool ( ::C_GameRules::* )( int )const)(&::C_GameRules::IsHolidayActive)
            , (bool ( C_GameRules_wrapper::* )( int )const)(&C_GameRules_wrapper::default_IsHolidayActive)
            , ( bp::arg("eHoliday") ) )    
        .def( 
            "IsLocalPlayer"
            , (bool ( ::C_GameRules::* )( int ))(&::C_GameRules::IsLocalPlayer)
            , (bool ( C_GameRules_wrapper::* )( int ))(&C_GameRules_wrapper::default_IsLocalPlayer)
            , ( bp::arg("nEntIndex") ) )    
        .def( 
            "IsManualMapChangeOkay"
            , (bool ( ::C_GameRules::* )( char const * * ))(&::C_GameRules::IsManualMapChangeOkay)
            , (bool ( C_GameRules_wrapper::* )( char const * * ))(&C_GameRules_wrapper::default_IsManualMapChangeOkay)
            , ( bp::arg("pszReason") ) )    
        .def( 
            "IsMultiplayer"
            , bp::pure_virtual( (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::IsMultiplayer) ) )    
        .def( 
            "ModifySentChat"
            , (void ( ::C_GameRules::* )( char *,int ))(&::C_GameRules::ModifySentChat)
            , (void ( C_GameRules_wrapper::* )( char *,int ))(&C_GameRules_wrapper::default_ModifySentChat)
            , ( bp::arg("pBuf"), bp::arg("iBufSize") ) )    
        .def( 
            "Name"
            , (char const * ( ::C_GameRules::* )(  ))(&::C_GameRules::Name)
            , (char const * ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_Name) )    
        .def( 
            "OnFileReceived"
            , (void ( ::C_GameRules::* )( char const *,unsigned int ))(&::C_GameRules::OnFileReceived)
            , (void ( C_GameRules_wrapper::* )( char const *,unsigned int ))(&C_GameRules_wrapper::default_OnFileReceived)
            , ( bp::arg("fileName"), bp::arg("transferID") ) )    
        .def( 
            "ShouldCollide"
            , (bool ( ::C_GameRules::* )( int,int ))( &::C_GameRules::ShouldCollide )
            , ( bp::arg("collisionGroup0"), bp::arg("collisionGroup1") ) )    
        .def( 
            "ShouldDrawHeadLabels"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::ShouldDrawHeadLabels)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_ShouldDrawHeadLabels) )    
        .def( 
            "ShouldWarnOfAbandonOnQuit"
            , (bool ( ::C_GameRules::* )(  ))(&::C_GameRules::ShouldWarnOfAbandonOnQuit)
            , (bool ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_ShouldWarnOfAbandonOnQuit) )    
        .def( 
            "ShutdownGamerules"
            , (void ( ::C_GameRules::* )(  ))(&::C_GameRules::ShutdownGamerules)
            , (void ( C_GameRules_wrapper::* )(  ))(&C_GameRules_wrapper::default_ShutdownGamerules) )    
        .def( 
            "SwitchToNextBestWeapon"
            , (bool ( ::C_GameRules::* )( ::C_BaseCombatCharacter *,::C_BaseCombatWeapon * ))(&::C_GameRules::SwitchToNextBestWeapon)
            , (bool ( C_GameRules_wrapper::* )( ::C_BaseCombatCharacter *,::C_BaseCombatWeapon * ))(&C_GameRules_wrapper::default_SwitchToNextBestWeapon)
            , ( bp::arg("pPlayer"), bp::arg("pCurrentWeapon") ) )    
        .def( 
            "TranslateEffectForVisionFilter"
            , (char const * ( ::C_GameRules::* )( char const *,char const * ))(&::C_GameRules::TranslateEffectForVisionFilter)
            , (char const * ( C_GameRules_wrapper::* )( char const *,char const * ))(&C_GameRules_wrapper::default_TranslateEffectForVisionFilter)
            , ( bp::arg("pchEffectType"), bp::arg("pchEffectName") ) );

}

