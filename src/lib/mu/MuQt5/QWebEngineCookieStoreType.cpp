//*****************************************************************************
// Copyright (c) 2019 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

#include <MuQt5/qtUtils.h>
#include <MuQt5/QWebEngineCookieStoreType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QTimerEventType.h>
#include <MuQt5/QNetworkCookieType.h>
#include <MuQt5/QUrlType.h>
#include <MuQt5/QObjectType.h>
#include <MuQt5/QEventType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QWebEngineCookieStore::~MuQt_QWebEngineCookieStore()
{
    if (_obj)
    {
        *_obj->data<Pointer>() = Pointer(0);
        _obj->releaseExternal();
    }
    _obj = 0;
    _env = 0;
    _baseType = 0;
}

bool MuQt_QWebEngineCookieStore::event(QEvent * e) 
{
    if (!_env) return QWebEngineCookieStore::event(e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QWebEngineCookieStore::event(e);
    }
}

bool MuQt_QWebEngineCookieStore::eventFilter(QObject * watched, QEvent * event) 
{
    if (!_env) return QWebEngineCookieStore::eventFilter(watched, event);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[1];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(3);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeinstance<QObjectType>(c,watched,"qt.QObject"));
        args[2] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QWebEngineCookieStore::eventFilter(watched, event);
    }
}

void MuQt_QWebEngineCookieStore::customEvent(QEvent * event) 
{
    if (!_env) { QWebEngineCookieStore::customEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[2];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QWebEngineCookieStore::customEvent(event);
    }
}

void MuQt_QWebEngineCookieStore::timerEvent(QTimerEvent * event) 
{
    if (!_env) { QWebEngineCookieStore::timerEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[3];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QTimerEventType>(c,event,"qt.QTimerEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QWebEngineCookieStore::timerEvent(event);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QWebEngineCookieStoreType::QWebEngineCookieStoreType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QWebEngineCookieStoreType::~QWebEngineCookieStoreType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QWebEngineCookieStore_QWebEngineCookieStore_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QWebEngineCookieStore* w = object<QWebEngineCookieStore>(widget))
    {
        QWebEngineCookieStoreType* type = 
            c->findSymbolOfTypeByQualifiedName<QWebEngineCookieStoreType>(c->internName("qt.QWebEngineCookieStore"), false);
        ClassInstance* o = ClassInstance::allocate(type);
        setobject(o, w);
        return o;
    }
    else
    {
        throw BadCastException();
    }
}

static NODE_IMPLEMENTATION(castFromObject, Pointer)
{
    NODE_RETURN( QWebEngineCookieStore_QWebEngineCookieStore_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

void qt_QWebEngineCookieStore_deleteAllCookies_void_QWebEngineCookieStore(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    arg0->deleteAllCookies();
}

void qt_QWebEngineCookieStore_deleteCookie_void_QWebEngineCookieStore_QNetworkCookie_QUrl(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_cookie, Pointer param_origin)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    const QNetworkCookie  arg1 = getqtype<QNetworkCookieType>(param_cookie);
    const QUrl  arg2 = getqtype<QUrlType>(param_origin);
    arg0->deleteCookie(arg1, arg2);
}

void qt_QWebEngineCookieStore_deleteSessionCookies_void_QWebEngineCookieStore(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    arg0->deleteSessionCookies();
}

void qt_QWebEngineCookieStore_loadAllCookies_void_QWebEngineCookieStore(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    arg0->loadAllCookies();
}

void qt_QWebEngineCookieStore_setCookie_void_QWebEngineCookieStore_QNetworkCookie_QUrl(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_cookie, Pointer param_origin)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    const QNetworkCookie  arg1 = getqtype<QNetworkCookieType>(param_cookie);
    const QUrl  arg2 = getqtype<QUrlType>(param_origin);
    arg0->setCookie(arg1, arg2);
}

bool qt_QWebEngineCookieStore_event_bool_QWebEngineCookieStore_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? arg0->QWebEngineCookieStore::event(arg1) : arg0->event(arg1);
}

bool qt_QWebEngineCookieStore_eventFilter_bool_QWebEngineCookieStore_QObject_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_watched, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    QObject * arg1 = object<QObject>(param_watched);
    QEvent * arg2 = getqpointer<QEventType>(param_event);
    return isMuQtObject(arg0) ? arg0->QWebEngineCookieStore::eventFilter(arg1, arg2) : arg0->eventFilter(arg1, arg2);
}

void qt_QWebEngineCookieStore_customEvent_void_QWebEngineCookieStore_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QWebEngineCookieStore*)arg0)->customEvent_pub_parent(arg1);
    else ((MuQt_QWebEngineCookieStore*)arg0)->customEvent_pub(arg1);
}

void qt_QWebEngineCookieStore_timerEvent_void_QWebEngineCookieStore_QTimerEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWebEngineCookieStore* arg0 = object<QWebEngineCookieStore>(param_this);
    QTimerEvent * arg1 = getqpointer<QTimerEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QWebEngineCookieStore*)arg0)->timerEvent_pub_parent(arg1);
    else ((MuQt_QWebEngineCookieStore*)arg0)->timerEvent_pub(arg1);
}


static NODE_IMPLEMENTATION(_n_deleteAllCookies0, void)
{
    qt_QWebEngineCookieStore_deleteAllCookies_void_QWebEngineCookieStore(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_deleteCookie0, void)
{
    qt_QWebEngineCookieStore_deleteCookie_void_QWebEngineCookieStore_QNetworkCookie_QUrl(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer));
}

static NODE_IMPLEMENTATION(_n_deleteSessionCookies0, void)
{
    qt_QWebEngineCookieStore_deleteSessionCookies_void_QWebEngineCookieStore(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_loadAllCookies0, void)
{
    qt_QWebEngineCookieStore_loadAllCookies_void_QWebEngineCookieStore(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_setCookie0, void)
{
    qt_QWebEngineCookieStore_setCookie_void_QWebEngineCookieStore_QNetworkCookie_QUrl(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer));
}

static NODE_IMPLEMENTATION(_n_event0, bool)
{
    NODE_RETURN(qt_QWebEngineCookieStore_event_bool_QWebEngineCookieStore_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_eventFilter0, bool)
{
    NODE_RETURN(qt_QWebEngineCookieStore_eventFilter_bool_QWebEngineCookieStore_QObject_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_customEvent0, void)
{
    qt_QWebEngineCookieStore_customEvent_void_QWebEngineCookieStore_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_timerEvent0, void)
{
    qt_QWebEngineCookieStore_timerEvent_void_QWebEngineCookieStore_QTimerEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}



void
QWebEngineCookieStoreType::load()
{
    USING_MU_FUNCTION_SYMBOLS;
    MuLangContext* c = static_cast<MuLangContext*>(context());
    Module* global = globalModule();
    
    const string typeName        = name();
    const string refTypeName     = typeName + "&";
    const string fullTypeName    = fullyQualifiedName();
    const string fullRefTypeName = fullTypeName + "&";
    const char*  tn              = typeName.c_str();
    const char*  ftn             = fullTypeName.c_str();
    const char*  rtn             = refTypeName.c_str();
    const char*  frtn            = fullRefTypeName.c_str();

    scope()->addSymbols(new ReferenceType(c, rtn, this),

                        new Function(c, tn, BaseFunctions::dereference, Cast,
                                     Return, ftn,
                                     Args, frtn, End),

                        EndArguments);
    
    addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate, None,
                            Return, ftn,
                            End),


               new Function(c, tn, castFromObject, Cast,
                            Compiled, QWebEngineCookieStore_QWebEngineCookieStore_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    new Function(c, "deleteAllCookies", _n_deleteAllCookies0, None, Compiled, qt_QWebEngineCookieStore_deleteAllCookies_void_QWebEngineCookieStore, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), End),
    new Function(c, "deleteCookie", _n_deleteCookie0, None, Compiled, qt_QWebEngineCookieStore_deleteCookie_void_QWebEngineCookieStore_QNetworkCookie_QUrl, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), new Param(c, "cookie", "qt.QNetworkCookie"), new Param(c, "origin", "qt.QUrl"), End),
    new Function(c, "deleteSessionCookies", _n_deleteSessionCookies0, None, Compiled, qt_QWebEngineCookieStore_deleteSessionCookies_void_QWebEngineCookieStore, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), End),
    new Function(c, "loadAllCookies", _n_loadAllCookies0, None, Compiled, qt_QWebEngineCookieStore_loadAllCookies_void_QWebEngineCookieStore, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), End),
    new Function(c, "setCookie", _n_setCookie0, None, Compiled, qt_QWebEngineCookieStore_setCookie_void_QWebEngineCookieStore_QNetworkCookie_QUrl, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), new Param(c, "cookie", "qt.QNetworkCookie"), new Param(c, "origin", "qt.QUrl"), End),
    // MISSING: setCookieFilter (void; QWebEngineCookieStore this, "std::function<bool (const FilterRequest & )> & &" filterCallback)
    _func[0] = new MemberFunction(c, "event", _n_event0, None, Compiled, qt_QWebEngineCookieStore_event_bool_QWebEngineCookieStore_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), new Param(c, "e", "qt.QEvent"), End),
    _func[1] = new MemberFunction(c, "eventFilter", _n_eventFilter0, None, Compiled, qt_QWebEngineCookieStore_eventFilter_bool_QWebEngineCookieStore_QObject_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), new Param(c, "watched", "qt.QObject"), new Param(c, "event", "qt.QEvent"), End),
    // MISSING: metaObject ("const QMetaObject *"; QWebEngineCookieStore this)
    // MISSING: childEvent (void; QWebEngineCookieStore this, "QChildEvent *" event) // protected
    // MISSING: connectNotify (void; QWebEngineCookieStore this, "const QMetaMethod &" signal) // protected
    _func[2] = new MemberFunction(c, "customEvent", _n_customEvent0, None, Compiled, qt_QWebEngineCookieStore_customEvent_void_QWebEngineCookieStore_QEvent, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), new Param(c, "event", "qt.QEvent"), End),
    // MISSING: disconnectNotify (void; QWebEngineCookieStore this, "const QMetaMethod &" signal) // protected
    _func[3] = new MemberFunction(c, "timerEvent", _n_timerEvent0, None, Compiled, qt_QWebEngineCookieStore_timerEvent_void_QWebEngineCookieStore_QTimerEvent, Return, "void", Parameters, new Param(c, "this", "qt.QWebEngineCookieStore"), new Param(c, "event", "qt.QTimerEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QWebEngineCookieStore::staticMetaObject, propExclusions);
}

} // Mu