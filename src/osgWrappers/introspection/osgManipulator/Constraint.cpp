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
#include <osg/Vec3d>
#include <osgManipulator/Command>
#include <osgManipulator/Constraint>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_OBJECT_REFLECTOR(osgManipulator::Constraint)
	I_DeclaringFile("osgManipulator/Constraint");
	I_BaseType(osg::Referenced);
	I_Method1(bool, constrain, IN, osgManipulator::MotionCommand &, x,
	          Properties::VIRTUAL,
	          __bool__constrain__MotionCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInLineCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInLineCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInPlaneCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInPlaneCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale1DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale1DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale2DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale2DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::ScaleUniformCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__ScaleUniformCommand_R1,
	          "",
	          "");
	I_ProtectedConstructor1(IN, osg::Node &, refNode,
	                        Properties::NON_EXPLICIT,
	                        ____Constraint__osg_Node_R1,
	                        "",
	                        "");
	I_ProtectedMethod0(osg::Node &, getReferenceNode,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Node_R1__getReferenceNode,
	                   "",
	                   "");
	I_ProtectedMethod0(const osg::Node &, getReferenceNode,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_osg_Node_R1__getReferenceNode,
	                   "",
	                   "");
	I_ProtectedMethod0(const osg::Matrix &, getLocalToWorld,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_osg_Matrix_R1__getLocalToWorld,
	                   "",
	                   "");
	I_ProtectedMethod0(const osg::Matrix &, getWorldToLocal,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_osg_Matrix_R1__getWorldToLocal,
	                   "",
	                   "");
	I_ProtectedMethod0(void, computeLocalToWorldAndWorldToLocal,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__computeLocalToWorldAndWorldToLocal,
	                   "",
	                   "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgManipulator::GridConstraint)
	I_DeclaringFile("osgManipulator/Constraint");
	I_BaseType(osgManipulator::Constraint);
	I_Constructor3(IN, osg::Node &, refNode, IN, const osg::Vec3d &, origin, IN, const osg::Vec3d &, spacing,
	               ____GridConstraint__osg_Node_R1__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "",
	               "");
	I_Method1(void, setOrigin, IN, const osg::Vec3d &, origin,
	          Properties::NON_VIRTUAL,
	          __void__setOrigin__C5_osg_Vec3d_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3d &, getOrigin,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3d_R1__getOrigin,
	          "",
	          "");
	I_Method1(void, setSpacing, IN, const osg::Vec3d &, spacing,
	          Properties::NON_VIRTUAL,
	          __void__setSpacing__C5_osg_Vec3d_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3d &, getSpacing,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3d_R1__getSpacing,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInLineCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInLineCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInPlaneCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInPlaneCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale1DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale1DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale2DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale2DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::ScaleUniformCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__ScaleUniformCommand_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec3d &, Origin, 
	                 __C5_osg_Vec3d_R1__getOrigin, 
	                 __void__setOrigin__C5_osg_Vec3d_R1);
	I_SimpleProperty(const osg::Vec3d &, Spacing, 
	                 __C5_osg_Vec3d_R1__getSpacing, 
	                 __void__setSpacing__C5_osg_Vec3d_R1);
END_REFLECTOR

