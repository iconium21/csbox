// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "takedamageinfo.h"
#include "c_ai_basenpc.h"
#include "soundinfo.h"
#include "saverestore.h"
#include "saverestoretypes.h"
#include "vcollide_parse.h"
#include "iclientvehicle.h"
#include "steam/steamclientpublic.h"
#include "view_shared.h"
#include "c_playerresource.h"
#include "c_breakableprop.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "C_BaseFlex.pypp.hpp"

namespace bp = boost::python;

struct C_BaseFlex_wrapper : C_BaseFlex, bp::wrapper< C_BaseFlex > {

    C_BaseFlex_wrapper( )
    : C_BaseFlex( )
      , bp::wrapper< C_BaseFlex >(){
        // null constructor
    
    }

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( C_BaseFlex, Spawn )
        PY_OVERRIDE_LOG( _entities, C_BaseFlex, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseFlex::Spawn(  );
            }
        else
            this->C_BaseFlex::Spawn(  );
    }
    
    void default_Spawn(  ) {
        C_BaseFlex::Spawn( );
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Activate )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Activate(  );
            }
        else
            this->C_BaseEntity::Activate(  );
    }
    
    void default_Activate(  ) {
        C_BaseEntity::Activate( );
    }

    virtual void ClientThink(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, ClientThink )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, ClientThink )
        bp::override func_ClientThink = this->get_override( "ClientThink" );
        if( func_ClientThink.ptr() != Py_None )
            try {
                func_ClientThink(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::ClientThink(  );
            }
        else
            this->C_BaseEntity::ClientThink(  );
    }
    
    void default_ClientThink(  ) {
        C_BaseEntity::ClientThink( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, ComputeWorldSpaceSurroundingBox )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, ComputeWorldSpaceSurroundingBox )
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
            }
        else
            this->C_BaseEntity::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        C_BaseEntity::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::CreateVPhysics(  );
            }
        else
            return this->C_BaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return C_BaseEntity::CreateVPhysics( );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, DoImpactEffect )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, DoImpactEffect )
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::DoImpactEffect( tr, nDamageType );
            }
        else
            this->C_BaseEntity::DoImpactEffect( tr, nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        C_BaseEntity::DoImpactEffect( tr, nDamageType );
    }

    virtual void EndTouch( ::C_BaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, EndTouch )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, EndTouch )
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::EndTouch( pOther );
            }
        else
            this->C_BaseEntity::EndTouch( pOther );
    }
    
    void default_EndTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::EndTouch( pOther );
    }

    virtual ::CollideType_t GetCollideType(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, GetCollideType )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, GetCollideType )
        bp::override func_GetCollideType = this->get_override( "GetCollideType" );
        if( func_GetCollideType.ptr() != Py_None )
            try {
                return func_GetCollideType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseAnimating::GetCollideType(  );
            }
        else
            return this->C_BaseAnimating::GetCollideType(  );
    }
    
    ::CollideType_t default_GetCollideType(  ) {
        return C_BaseAnimating::GetCollideType( );
    }

    virtual char const * GetTracerType(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, GetTracerType )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, GetTracerType )
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::GetTracerType(  );
            }
        else
            return this->C_BaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return C_BaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, szValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return C_BaseEntity::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, flValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return C_BaseEntity::KeyValue( szKeyName, flValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, vecValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, vecValue );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return C_BaseEntity::KeyValue( szKeyName, vecValue );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, MakeTracer )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, MakeTracer )
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
            }
        else
            this->C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }

    virtual void NotifyShouldTransmit( ::ShouldTransmitState_t state ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, NotifyShouldTransmit )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, NotifyShouldTransmit )
        bp::override func_NotifyShouldTransmit = this->get_override( "NotifyShouldTransmit" );
        if( func_NotifyShouldTransmit.ptr() != Py_None )
            try {
                func_NotifyShouldTransmit( state );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::NotifyShouldTransmit( state );
            }
        else
            this->C_BaseAnimating::NotifyShouldTransmit( state );
    }
    
    void default_NotifyShouldTransmit( ::ShouldTransmitState_t state ) {
        C_BaseAnimating::NotifyShouldTransmit( state );
    }

    virtual void OnDataChanged( ::DataUpdateType_t updateType ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, OnDataChanged )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, OnDataChanged )
        bp::override func_OnDataChanged = this->get_override( "OnDataChanged" );
        if( func_OnDataChanged.ptr() != Py_None )
            try {
                func_OnDataChanged( updateType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::OnDataChanged( updateType );
            }
        else
            this->C_BaseAnimating::OnDataChanged( updateType );
    }
    
    void default_OnDataChanged( ::DataUpdateType_t updateType ) {
        C_BaseAnimating::OnDataChanged( updateType );
    }

    virtual void OnRestore(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, OnRestore )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::OnRestore(  );
            }
        else
            this->C_BaseEntity::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        C_BaseEntity::OnRestore( );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Precache )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Precache(  );
            }
        else
            this->C_BaseEntity::Precache(  );
    }
    
    void default_Precache(  ) {
        C_BaseEntity::Precache( );
    }

    virtual void PyReceiveMessage( ::boost::python::list msg ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, PyReceiveMessage )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, PyReceiveMessage )
        bp::override func_ReceiveMessage = this->get_override( "ReceiveMessage" );
        if( func_ReceiveMessage.ptr() != Py_None )
            try {
                func_ReceiveMessage( msg );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::PyReceiveMessage( msg );
            }
        else
            this->C_BaseEntity::PyReceiveMessage( msg );
    }
    
    void default_ReceiveMessage( ::boost::python::list msg ) {
        C_BaseEntity::PyReceiveMessage( msg );
    }

    virtual int Restore( ::IRestore & restore ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Restore )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Restore )
        bp::override func_Restore = this->get_override( "Restore" );
        if( func_Restore.ptr() != Py_None )
            try {
                return func_Restore( boost::ref(restore) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::Restore( restore );
            }
        else
            return this->C_BaseEntity::Restore( restore );
    }
    
    int default_Restore( ::IRestore & restore ) {
        return C_BaseEntity::Restore( restore );
    }

    virtual bool ShouldDraw(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, ShouldDraw )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, ShouldDraw )
        bp::override func_ShouldDraw = this->get_override( "ShouldDraw" );
        if( func_ShouldDraw.ptr() != Py_None )
            try {
                return func_ShouldDraw(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseAnimating::ShouldDraw(  );
            }
        else
            return this->C_BaseAnimating::ShouldDraw(  );
    }
    
    bool default_ShouldDraw(  ) {
        return C_BaseAnimating::ShouldDraw( );
    }

    virtual void Simulate(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, Simulate )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, Simulate )
        bp::override func_Simulate = this->get_override( "Simulate" );
        if( func_Simulate.ptr() != Py_None )
            try {
                func_Simulate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::Simulate(  );
            }
        else
            this->C_BaseAnimating::Simulate(  );
    }
    
    void default_Simulate(  ) {
        C_BaseAnimating::Simulate( );
    }

    virtual void StartTouch( ::C_BaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, StartTouch )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, StartTouch )
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::StartTouch( pOther );
            }
        else
            this->C_BaseEntity::StartTouch( pOther );
    }
    
    void default_StartTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::StartTouch( pOther );
    }

    virtual void UpdateOnRemove(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, UpdateOnRemove )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, UpdateOnRemove )
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::UpdateOnRemove(  );
            }
        else
            this->C_BaseAnimating::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        C_BaseAnimating::UpdateOnRemove( );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ClientClass* GetClientClass() {
    #if defined(_WIN32)
            if( GetCurrentThreadId() != g_hPythonThreadID )
                return C_BaseFlex::GetClientClass();
    #endif // _WIN32
            if( PyObject_HasAttrString(GetPyInstance().ptr(), "pyClientClass") )
            {
                try
                {
                    ClientClass *pClientClass = boost::python::extract<ClientClass *>( GetPyInstance().attr("pyClientClass") );
                    if( pClientClass )
                        return pClientClass;
                }
                catch( bp::error_already_set & ) 
                {
                    PyErr_Print();
                }
            }
            return C_BaseFlex::GetClientClass();
        }

    static int m_lifeState_Get( C_BaseFlex const & inst ) { return inst.m_lifeState; }

    static void m_lifeState_Set( C_BaseFlex & inst, int val ) { inst.m_lifeState = val; }

    static int m_takedamage_Get( C_BaseFlex const & inst ) { return inst.m_takedamage; }

    static void m_takedamage_Set( C_BaseFlex & inst, int val ) { inst.m_takedamage = val; }

    static int m_nSkin_Get( C_BaseFlex const & inst ) { return inst.m_nSkin; }

    static void m_nSkin_Set( C_BaseFlex & inst, int val ) { inst.m_nSkin = val; }

};

void register_C_BaseFlex_class(){

    bp::class_< C_BaseFlex_wrapper, bp::bases< C_BaseAnimatingOverlay >, boost::noncopyable >( "C_BaseFlex", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "AddFlexAnimation"
            , (void ( ::C_BaseFlex::* )( ::CSceneEventInfo * ))( &::C_BaseFlex::AddFlexAnimation )
            , ( bp::arg("info") ) )    
        .def( 
            "AddGlobalFlexController"
            , (int (*)( char const * ))( &::C_BaseFlex::AddGlobalFlexController )
            , ( bp::arg("szName") ) )    
        .def( 
            "BuildTransformations"
            , (void ( ::C_BaseFlex::* )( ::CStudioHdr *,::Vector *,::Quaternion *,::matrix3x4_t const &,int,::CBoneBitList & ))( &::C_BaseFlex::BuildTransformations )
            , ( bp::arg("pStudioHdr"), bp::arg("pos"), bp::arg("q"), bp::arg("cameraTransform"), bp::arg("boneMask"), bp::arg("boneComputed") ) )    
        .def( 
            "ClearSceneEvent"
            , (bool ( ::C_BaseFlex::* )( ::CSceneEventInfo *,bool,bool ))( &::C_BaseFlex::ClearSceneEvent )
            , ( bp::arg("info"), bp::arg("fastKill"), bp::arg("canceled") ) )    
        .def( 
            "EnsureTranslations"
            , (void ( ::C_BaseFlex::* )( ::flexsettinghdr_t const * ))( &::C_BaseFlex::EnsureTranslations )
            , ( bp::arg("pSettinghdr") ) )    
        .def( 
            "FindFlexController"
            , (::LocalFlexController_t ( ::C_BaseFlex::* )( char const * ))( &::C_BaseFlex::FindFlexController )
            , ( bp::arg("szName") ) )    
        .def( 
            "FlexControllerLocalToGlobal"
            , (int ( ::C_BaseFlex::* )( ::flexsettinghdr_t const *,int ))( &::C_BaseFlex::FlexControllerLocalToGlobal )
            , ( bp::arg("pSettinghdr"), bp::arg("key") ) )    
        .def( 
            "GetFlexWeight"
            , (float ( ::C_BaseFlex::* )( ::LocalFlexController_t ))( &::C_BaseFlex::GetFlexWeight )
            , ( bp::arg("index") ) )    
        .def( 
            "GetGlobalFlexControllerName"
            , (char const * (*)( int ))( &::C_BaseFlex::GetGlobalFlexControllerName )
            , ( bp::arg("idx") ) )    
        .def( 
            "GetSoundSpatialization"
            , (bool ( ::C_BaseFlex::* )( ::SpatializationInfo_t & ))( &::C_BaseFlex::GetSoundSpatialization )
            , ( bp::arg("info") ) )    
        .def( 
            "GetToolRecordingState"
            , (void ( ::C_BaseFlex::* )( ::KeyValues * ))( &::C_BaseFlex::GetToolRecordingState )
            , ( bp::arg("msg") ) )    
        .def( 
            "InitPhonemeMappings"
            , (void ( ::C_BaseFlex::* )(  ))( &::C_BaseFlex::InitPhonemeMappings ) )    
        .def( 
            "LinkToGlobalFlexControllers"
            , (void (*)( ::CStudioHdr * ))( &::C_BaseFlex::LinkToGlobalFlexControllers )
            , ( bp::arg("hdr") ) )    
        .def( 
            "OnThreadedDrawSetup"
            , (void ( ::C_BaseFlex::* )(  ))( &::C_BaseFlex::OnThreadedDrawSetup ) )    
        .def( 
            "ProcessSceneEvents"
            , (void ( ::C_BaseFlex::* )( bool ))( &::C_BaseFlex::ProcessSceneEvents )
            , ( bp::arg("bFlexEvents") ) )    
        .def( 
            "RunFlexDelay"
            , (void (*)( int,float *,float *,float & ))( &::C_BaseFlex::RunFlexDelay )
            , ( bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights"), bp::arg("flFlexDelayTime") ) )    
        .def( 
            "RunFlexRules"
            , (void (*)( ::CStudioHdr *,float * ))( &::C_BaseFlex::RunFlexRules )
            , ( bp::arg("pStudioHdr"), bp::arg("dest") ) )    
        .def( 
            "SetFlexWeight"
            , (void ( ::C_BaseFlex::* )( ::LocalFlexController_t,float ))( &::C_BaseFlex::SetFlexWeight )
            , ( bp::arg("index"), bp::arg("value") ) )    
        .def( 
            "SetViewTarget"
            , (::Vector ( ::C_BaseFlex::* )( ::CStudioHdr * ))( &::C_BaseFlex::SetViewTarget )
            , ( bp::arg("pStudioHdr") ) )    
        .def( 
            "SetupGlobalWeights"
            , (bool ( ::C_BaseFlex::* )( ::matrix3x4_t const *,int,float *,float * ))( &::C_BaseFlex::SetupGlobalWeights )
            , ( bp::arg("pBoneToWorld"), bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights") ) )    
        .def( 
            "SetupLocalWeights"
            , (void ( ::C_BaseFlex::* )( ::matrix3x4_t const *,int,float *,float * ))( &::C_BaseFlex::SetupLocalWeights )
            , ( bp::arg("pBoneToWorld"), bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights") ) )    
        .def( 
            "SetupMappings"
            , (void ( ::C_BaseFlex::* )( char const * ))( &::C_BaseFlex::SetupMappings )
            , ( bp::arg("pchFileRoot") ) )    
        .def( 
            "SetupWeights"
            , (void ( ::C_BaseFlex::* )( ::matrix3x4_t const *,int,float *,float * ))( &::C_BaseFlex::SetupWeights )
            , ( bp::arg("pBoneToWorld"), bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights") ) )    
        .def( 
            "Spawn"
            , (void ( ::C_BaseFlex::* )(  ))(&::C_BaseFlex::Spawn)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_Spawn) )    
        .def( 
            "StandardBlendingRules"
            , (void ( ::C_BaseFlex::* )( ::CStudioHdr *,::Vector *,::Quaternion *,float,int ))( &::C_BaseFlex::StandardBlendingRules )
            , ( bp::arg("hdr"), bp::arg("pos"), bp::arg("q"), bp::arg("currentTime"), bp::arg("boneMask") ) )    
        .def( 
            "UsesFlexDelayedWeights"
            , (bool ( ::C_BaseFlex::* )(  ))( &::C_BaseFlex::UsesFlexDelayedWeights ) )    
        .def( 
            "Activate"
            , (void ( ::C_BaseEntity::* )(  ))(&::C_BaseEntity::Activate)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_Activate) )    
        .def( 
            "ClientThink"
            , (void ( ::C_BaseEntity::* )(  ))(&::C_BaseEntity::ClientThink)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_ClientThink) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::C_BaseEntity::* )( ::Vector *,::Vector * ))(&::C_BaseEntity::ComputeWorldSpaceSurroundingBox)
            , (void ( C_BaseFlex_wrapper::* )( ::Vector *,::Vector * ))(&C_BaseFlex_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pVecWorldMins"), bp::arg("pVecWorldMaxs") ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::C_BaseEntity::* )(  ))(&::C_BaseEntity::CreateVPhysics)
            , (bool ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_CreateVPhysics) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::C_BaseEntity::* )( ::trace_t &,int ))(&::C_BaseEntity::DoImpactEffect)
            , (void ( C_BaseFlex_wrapper::* )( ::trace_t &,int ))(&C_BaseFlex_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "EndTouch"
            , (void ( ::C_BaseEntity::* )( ::C_BaseEntity * ))(&::C_BaseEntity::EndTouch)
            , (void ( C_BaseFlex_wrapper::* )( ::C_BaseEntity * ))(&C_BaseFlex_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "GetCollideType"
            , (::CollideType_t ( ::C_BaseAnimating::* )(  ))(&::C_BaseAnimating::GetCollideType)
            , (::CollideType_t ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_GetCollideType) )    
        .def( 
            "GetTracerType"
            , (char const * ( ::C_BaseEntity::* )(  ))(&::C_BaseEntity::GetTracerType)
            , (char const * ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,char const * ))(&::C_BaseEntity::KeyValue)
            , (bool ( C_BaseFlex_wrapper::* )( char const *,char const * ))(&C_BaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,float ))(&::C_BaseEntity::KeyValue)
            , (bool ( C_BaseFlex_wrapper::* )( char const *,float ))(&C_BaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,::Vector const & ))(&::C_BaseEntity::KeyValue)
            , (bool ( C_BaseFlex_wrapper::* )( char const *,::Vector const & ))(&C_BaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::C_BaseEntity::* )( ::Vector const &,::trace_t const &,int ))(&::C_BaseEntity::MakeTracer)
            , (void ( C_BaseFlex_wrapper::* )( ::Vector const &,::trace_t const &,int ))(&C_BaseFlex_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "NotifyShouldTransmit"
            , (void ( ::C_BaseAnimating::* )( ::ShouldTransmitState_t ))(&::C_BaseAnimating::NotifyShouldTransmit)
            , (void ( C_BaseFlex_wrapper::* )( ::ShouldTransmitState_t ))(&C_BaseFlex_wrapper::default_NotifyShouldTransmit)
            , ( bp::arg("state") ) )    
        .def( 
            "OnDataChanged"
            , (void ( ::C_BaseAnimating::* )( ::DataUpdateType_t ))(&::C_BaseAnimating::OnDataChanged)
            , (void ( C_BaseFlex_wrapper::* )( ::DataUpdateType_t ))(&C_BaseFlex_wrapper::default_OnDataChanged)
            , ( bp::arg("updateType") ) )    
        .def( 
            "OnRestore"
            , (void ( ::C_BaseEntity::* )(  ))(&::C_BaseEntity::OnRestore)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_OnRestore) )    
        .def( 
            "Precache"
            , (void ( ::C_BaseEntity::* )(  ))(&::C_BaseEntity::Precache)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_Precache) )    
        .def( 
            "ReceiveMessage"
            , (void ( ::C_BaseEntity::* )( ::boost::python::list ))(&::C_BaseEntity::PyReceiveMessage)
            , (void ( C_BaseFlex_wrapper::* )( ::boost::python::list ))(&C_BaseFlex_wrapper::default_ReceiveMessage)
            , ( bp::arg("msg") ) )    
        .def( 
            "Restore"
            , (int ( ::C_BaseEntity::* )( ::IRestore & ))(&::C_BaseEntity::Restore)
            , (int ( C_BaseFlex_wrapper::* )( ::IRestore & ))(&C_BaseFlex_wrapper::default_Restore)
            , ( bp::arg("restore") ) )    
        .def( 
            "ShouldDraw"
            , (bool ( ::C_BaseAnimating::* )(  ))(&::C_BaseAnimating::ShouldDraw)
            , (bool ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_ShouldDraw) )    
        .def( 
            "Simulate"
            , (void ( ::C_BaseAnimating::* )(  ))(&::C_BaseAnimating::Simulate)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_Simulate) )    
        .def( 
            "StartTouch"
            , (void ( ::C_BaseEntity::* )( ::C_BaseEntity * ))(&::C_BaseEntity::StartTouch)
            , (void ( C_BaseFlex_wrapper::* )( ::C_BaseEntity * ))(&C_BaseFlex_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::C_BaseAnimating::* )(  ))(&::C_BaseAnimating::UpdateOnRemove)
            , (void ( C_BaseFlex_wrapper::* )(  ))(&C_BaseFlex_wrapper::default_UpdateOnRemove) )    
        .staticmethod( "AddGlobalFlexController" )    
        .staticmethod( "GetGlobalFlexControllerName" )    
        .staticmethod( "LinkToGlobalFlexControllers" )    
        .staticmethod( "RunFlexDelay" )    
        .staticmethod( "RunFlexRules" )    
        .add_property( "lifestate", &C_BaseFlex_wrapper::m_lifeState_Get, &C_BaseFlex_wrapper::m_lifeState_Set )    
        .add_property( "takedamage", &C_BaseFlex_wrapper::m_takedamage_Get, &C_BaseFlex_wrapper::m_takedamage_Set )    
        .add_property( "skin", &C_BaseFlex_wrapper::m_nSkin_Get, &C_BaseFlex_wrapper::m_nSkin_Set );

}

