// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCODEVIEWER_ImportedObject_generated_h
#error "ImportedObject.generated.h already included, missing '#pragma once' in ImportedObject.h"
#endif
#define GCODEVIEWER_ImportedObject_generated_h

#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetFullFilePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		this->setFullFilePath(Z_Param_path); \
	}


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetFullFilePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		this->setFullFilePath(Z_Param_path); \
	}


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAImportedObject(); \
	friend GCODEVIEWER_API class UClass* Z_Construct_UClass_AImportedObject(); \
	public: \
	DECLARE_CLASS(AImportedObject, AInteractiveObjectActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GCODEViewer"), NO_API) \
	DECLARE_SERIALIZER(AImportedObject) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAImportedObject(); \
	friend GCODEVIEWER_API class UClass* Z_Construct_UClass_AImportedObject(); \
	public: \
	DECLARE_CLASS(AImportedObject, AInteractiveObjectActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GCODEViewer"), NO_API) \
	DECLARE_SERIALIZER(AImportedObject) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AImportedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AImportedObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImportedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImportedObject); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AImportedObject(const AImportedObject& InCopy); \
public:


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AImportedObject() { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AImportedObject(const AImportedObject& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImportedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImportedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AImportedObject)


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_11_PROLOG
#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_RPC_WRAPPERS \
	GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_INCLASS \
	GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_INCLASS_NO_PURE_DECLS \
	GCODEViewer_Source_GCODEViewer_ImportedObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCODEViewer_Source_GCODEViewer_ImportedObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
