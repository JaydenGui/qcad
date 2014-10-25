// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPluginInterface.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QString>
            
                #include <QScriptEngine>
            
            
        // includes for base ecma wrapper classes
         void REcmaPluginInterface::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPluginInterface*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, init, "init");
            
            REcmaHelper::registerFunction(&engine, proto, uninit, "uninit");
            
            REcmaHelper::registerFunction(&engine, proto, postInit, "postInit");
            
            REcmaHelper::registerFunction(&engine, proto, getPluginInfo, "getPluginInfo");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPluginInterface*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    ctor.setProperty("GotSplashWindow",
    QScriptValue(RPluginInterface::GotSplashWindow),
    QScriptValue::ReadOnly);


    ctor.setProperty("GotMainWindow",
    QScriptValue(RPluginInterface::GotMainWindow),
    QScriptValue::ReadOnly);


    ctor.setProperty("LoadedFiles",
    QScriptValue(RPluginInterface::LoadedFiles),
    QScriptValue::ReadOnly);


    ctor.setProperty("ScriptsExecuted",
    QScriptValue(RPluginInterface::ScriptsExecuted),
    QScriptValue::ReadOnly);


    ctor.setProperty("AllDone",
    QScriptValue(RPluginInterface::AllDone),
    QScriptValue::ReadOnly);


    // enum conversions:
    
    qScriptRegisterMetaType<RPluginInterface::InitStatus>(
        &engine,
        toScriptValueEnumInitStatus,
        fromScriptValueEnumInitStatus,
        ctor.property(QString::fromLatin1("prototype"))
    );

        
    // init class:
    engine.globalObject().setProperty("RPluginInterface",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPluginInterface::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RPluginInterface: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPluginInterface::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPluginInterface"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPluginInterface::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPluginInterface::init
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginInterface::init", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginInterface::init";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPluginInterface* self = 
                        getSelf("init", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->init();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginInterface.init().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginInterface::init", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginInterface::uninit
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginInterface::uninit", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginInterface::uninit";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPluginInterface* self = 
                        getSelf("uninit", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->uninit();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->uninit(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginInterface.uninit().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginInterface::uninit", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginInterface::postInit
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginInterface::postInit", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginInterface::postInit";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPluginInterface* self = 
                        getSelf("postInit", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RPluginInterface::InitStatus */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RPluginInterface::InitStatus
                    a0 =
                    (RPluginInterface::InitStatus)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->postInit(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginInterface.postInit().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginInterface::postInit", context, engine);
            return result;
        }
         QScriptValue
        REcmaPluginInterface::getPluginInfo
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPluginInterface::getPluginInfo", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPluginInterface::getPluginInfo";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPluginInterface* self = 
                        getSelf("getPluginInfo", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RPluginInfo'
    RPluginInfo cppResult =
        
               self->getPluginInfo();
        // return type: RPluginInfo
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPluginInterface.getPluginInfo().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPluginInterface::getPluginInfo", context, engine);
            return result;
        }
         QScriptValue REcmaPluginInterface::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPluginInterface* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPluginInterface(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPluginInterface::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPluginInterface* self = getSelf("RPluginInterface", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPluginInterface* REcmaPluginInterface::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPluginInterface* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPluginInterface >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPluginInterface.%1(): "
                        "This object is not a RPluginInterface").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPluginInterface* REcmaPluginInterface::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPluginInterface* selfBase = getSelf(fName, context);
                RPluginInterface* self = dynamic_cast<RPluginInterface*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPluginInterface >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPluginInterface.%1(): "
                    "This object is not a RPluginInterface").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaPluginInterface::toScriptValueEnumInitStatus(QScriptEngine* engine, const RPluginInterface::InitStatus& value)
    
        {
            return QScriptValue(engine, (int)value);
        }
         void REcmaPluginInterface::fromScriptValueEnumInitStatus(const QScriptValue& value, RPluginInterface::InitStatus& out)
    
        {
            out = qvariant_cast<RPluginInterface::InitStatus>(value.toVariant());
        }
        