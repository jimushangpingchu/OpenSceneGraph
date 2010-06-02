// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Hint>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_OBJECT_REFLECTOR(osg::Hint)
	I_DeclaringFile("osg/Hint");
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Hint,
	               "",
	               "");
	I_Constructor2(IN, GLenum, target, IN, GLenum, mode,
	               ____Hint__GLenum__GLenum,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Hint &, hint, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Hint__C5_Hint_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method0(unsigned int, getMember,
	          Properties::VIRTUAL,
	          __unsigned_int__getMember,
	          "Return the member identifier within the attribute's class type. ",
	          "Used for light number/clip plane number etc. ");
	I_Method1(void, setTarget, IN, GLenum, target,
	          Properties::NON_VIRTUAL,
	          __void__setTarget__GLenum,
	          "",
	          "");
	I_Method0(GLenum, getTarget,
	          Properties::NON_VIRTUAL,
	          __GLenum__getTarget,
	          "",
	          "");
	I_Method1(void, setMode, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMode__GLenum,
	          "",
	          "");
	I_Method0(GLenum, getMode,
	          Properties::NON_VIRTUAL,
	          __GLenum__getMode,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, x,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state. ");
	I_SimpleProperty(unsigned int, Member, 
	                 __unsigned_int__getMember, 
	                 0);
	I_SimpleProperty(GLenum, Mode, 
	                 __GLenum__getMode, 
	                 __void__setMode__GLenum);
	I_SimpleProperty(GLenum, Target, 
	                 __GLenum__getTarget, 
	                 __void__setTarget__GLenum);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

