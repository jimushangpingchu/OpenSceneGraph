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

#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Vec3>
#include <osgUtil/TransformCallback>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_OBJECT_REFLECTOR(osgUtil::TransformCallback)
	I_DeclaringFile("osgUtil/TransformCallback");
	I_BaseType(osg::NodeCallback);
	I_Constructor3(IN, const osg::Vec3 &, pivot, IN, const osg::Vec3 &, axis, IN, float, angularVelocity,
	               ____TransformCallback__C5_osg_Vec3_R1__C5_osg_Vec3_R1__float,
	               "",
	               "");
	I_Method1(void, setPause, IN, bool, pause,
	          Properties::NON_VIRTUAL,
	          __void__setPause__bool,
	          "",
	          "");
	I_SimpleProperty(bool, Pause, 
	                 0, 
	                 __void__setPause__bool);
END_REFLECTOR

