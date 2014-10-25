


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #include "REcmaShellMdiArea.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QToolButton>
            
                #include "RMdiChildQt.h"
            
            
        // includes for base ecma wrapper classes
        

            #define QTSCRIPT_IS_GENERATED_FUNCTION(fun) ((fun.data().toUInt32() & 0xFFFF0000) == 0xBABE0000)
            #define QTSCRIPT_IS_FUNCTION_IN_CALL(fun) ((fun.data().toUInt32() & 0x0000F000) == 0x0000B000)

        
    // Destructor:
    REcmaShellMdiArea::~REcmaShellMdiArea() {}
        RMdiArea* REcmaShellMdiArea::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RMdiArea* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RMdiArea >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RMdiArea.%1(): "
                        "This object is not a RMdiArea").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellMdiArea* REcmaShellMdiArea::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RMdiArea* selfBase = getSelf(fName, context);
                REcmaShellMdiArea* self = dynamic_cast<REcmaShellMdiArea*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellMdiArea >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RMdiArea.%1(): "
                    "This object is not a RMdiArea").arg(fName),
                    context);
            }

            return self;
            


        }
        
    
    
    // Constructors:
    
      REcmaShellMdiArea::REcmaShellMdiArea(
                QWidget * parent
            ) : RMdiArea(
                parent
                ) {
            }
        
    
    
      QToolButton * REcmaShellMdiArea::getAddTabButton(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellMdiArea::getAddTabButton", engine);
                QScriptValue _q_function = __qtscript_self.property("getAddTabButton");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RMdiArea::getAddTabButton";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        QToolButton * ret =
                        RMdiArea::getAddTabButton(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::getAddTabButton", engine);

                        
                          return ret;
                        
                } else {
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    QToolButton * res = qscriptvalue_cast< 
                        QToolButton *
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::getAddTabButton", engine);

                    
                            return res;
                          
                }
            }
        
    
    
      void REcmaShellMdiArea::updateTabBar(
                RMdiChildQt * child
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellMdiArea::updateTabBar", engine);
                QScriptValue _q_function = __qtscript_self.property("updateTabBar");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RMdiArea::updateTabBar";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RMdiArea::updateTabBar(
                            child
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::updateTabBar", engine);

                        
                } else {
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RMdiChildQt *, copyable: false
        << qScriptValueFromValue(engine, 

        child
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::updateTabBar", engine);

                    
                }
            }
        
    
    
      void REcmaShellMdiArea::updateTabBarSize(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellMdiArea::updateTabBarSize", engine);
                QScriptValue _q_function = __qtscript_self.property("updateTabBarSize");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RMdiArea::updateTabBarSize";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RMdiArea::updateTabBarSize(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::updateTabBarSize", engine);

                        
                } else {
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::updateTabBarSize", engine);

                    
                }
            }
        
    
    
      void REcmaShellMdiArea::closeTab(
                int i
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellMdiArea::closeTab", engine);
                QScriptValue _q_function = __qtscript_self.property("closeTab");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RMdiArea::closeTab";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RMdiArea::closeTab(
                            i
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::closeTab", engine);

                        
                } else {
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: int, copyable: true
        << qScriptValueFromValue(engine, 

        i
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::closeTab", engine);

                    
                }
            }
        
    
    
      void REcmaShellMdiArea::activateTab(
                int i
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellMdiArea::activateTab", engine);
                QScriptValue _q_function = __qtscript_self.property("activateTab");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RMdiArea::activateTab";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RMdiArea::activateTab(
                            i
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::activateTab", engine);

                        
                } else {
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: int, copyable: true
        << qScriptValueFromValue(engine, 

        i
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::activateTab", engine);

                    
                }
            }
        
    
    
      void REcmaShellMdiArea::resizeEvent(
                QResizeEvent * event
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellMdiArea::resizeEvent", engine);
                QScriptValue _q_function = __qtscript_self.property("resizeEvent");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RMdiArea::resizeEvent";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RMdiArea::resizeEvent(
                            event
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::resizeEvent", engine);

                        
                } else {
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                        // temporary make protected function scriptable, only from the context of this function call:
                        QScriptValue proto = engine->defaultPrototype(qMetaTypeId<RMdiArea*>());
                        REcmaHelper::registerFunction(engine, &proto, resizeEvent, "resizeEvent");
                        
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QResizeEvent *, copyable: false
        << qScriptValueFromValue(engine, 

        event
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellMdiArea::resizeEvent", engine);

                    
                }
            }
        
    
  

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	 QScriptValue
        REcmaShellMdiArea::resizeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaShellMdiArea::resizeEvent", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaShellMdiArea::resizeEvent";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // protected function: can only be called from ECMA shell:
                    REcmaShellMdiArea* self = 
                        getSelfShell("", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QResizeEvent * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    QResizeEvent * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<QResizeEvent >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RMdiArea: Argument 0 is not of type QResizeEvent *QResizeEvent *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->RMdiArea::resizeEvent(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.resizeEvent().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaShellMdiArea::resizeEvent", context, engine);
            return result;
        }
        