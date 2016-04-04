// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAPROPERTYEDITOR_H
        #define RECMAPROPERTYEDITOR_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellPropertyEditor.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaPropertyEditor {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRPropertyListener(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRLayerListener(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RLayerListener:
        

        // methods of secondary base class RLayerListener:
        

    // properties:
    

    // public methods:
    static  QScriptValue
        updateFromDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFromObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearEditor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        propertyChanged
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        listPropertyChanged
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGroupTitles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyTitles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyAttributes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTypeCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEntityTypeFilter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntityTypeFilter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        checkType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPropertyEditor* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellPropertyEditor* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    