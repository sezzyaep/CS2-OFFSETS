namespace constraint_breakableparams_t
{
	constexpr uint32_t strength = 0x0;
	constexpr uint32_t forceLimit = 0x4;
	constexpr uint32_t torqueLimit = 0x8;
	constexpr uint32_t bodyMassScale = 0xC;
	constexpr uint32_t isActive = 0x14;
}

namespace constraint_axislimit_t
{
	constexpr uint32_t flMinRotation = 0x0;
	constexpr uint32_t flMaxRotation = 0x4;
	constexpr uint32_t flMotorTargetAngSpeed = 0x8;
	constexpr uint32_t flMotorMaxTorque = 0xC;
}

namespace constraint_hingeparams_t
{
	constexpr uint32_t worldPosition = 0x0;
	constexpr uint32_t worldAxisDirection = 0xC;
	constexpr uint32_t hingeAxis = 0x18;
	constexpr uint32_t constraint = 0x28;
}

namespace IPhysicsPlayerController
{
}

namespace CFeJiggleBone
{
	constexpr uint32_t m_nFlags = 0x0;
	constexpr uint32_t m_flLength = 0x4;
	constexpr uint32_t m_flTipMass = 0x8;
	constexpr uint32_t m_flYawStiffness = 0xC;
	constexpr uint32_t m_flYawDamping = 0x10;
	constexpr uint32_t m_flPitchStiffness = 0x14;
	constexpr uint32_t m_flPitchDamping = 0x18;
	constexpr uint32_t m_flAlongStiffness = 0x1C;
	constexpr uint32_t m_flAlongDamping = 0x20;
	constexpr uint32_t m_flAngleLimit = 0x24;
	constexpr uint32_t m_flMinYaw = 0x28;
	constexpr uint32_t m_flMaxYaw = 0x2C;
	constexpr uint32_t m_flYawFriction = 0x30;
	constexpr uint32_t m_flYawBounce = 0x34;
	constexpr uint32_t m_flMinPitch = 0x38;
	constexpr uint32_t m_flMaxPitch = 0x3C;
	constexpr uint32_t m_flPitchFriction = 0x40;
	constexpr uint32_t m_flPitchBounce = 0x44;
	constexpr uint32_t m_flBaseMass = 0x48;
	constexpr uint32_t m_flBaseStiffness = 0x4C;
	constexpr uint32_t m_flBaseDamping = 0x50;
	constexpr uint32_t m_flBaseMinLeft = 0x54;
	constexpr uint32_t m_flBaseMaxLeft = 0x58;
	constexpr uint32_t m_flBaseLeftFriction = 0x5C;
	constexpr uint32_t m_flBaseMinUp = 0x60;
	constexpr uint32_t m_flBaseMaxUp = 0x64;
	constexpr uint32_t m_flBaseUpFriction = 0x68;
	constexpr uint32_t m_flBaseMinForward = 0x6C;
	constexpr uint32_t m_flBaseMaxForward = 0x70;
	constexpr uint32_t m_flBaseForwardFriction = 0x74;
	constexpr uint32_t m_flRadius0 = 0x78;
	constexpr uint32_t m_flRadius1 = 0x7C;
	constexpr uint32_t m_vPoint0 = 0x80;
	constexpr uint32_t m_vPoint1 = 0x8C;
	constexpr uint32_t m_nCollisionMask = 0x98;
}

namespace CFeNamedJiggleBone
{
	constexpr uint32_t m_strParentBone = 0x0;
	constexpr uint32_t m_transform = 0x10;
	constexpr uint32_t m_nJiggleParent = 0x30;
	constexpr uint32_t m_jiggleBone = 0x34;
}

namespace CFeIndexedJiggleBone
{
	constexpr uint32_t m_nNode = 0x0;
	constexpr uint32_t m_nJiggleParent = 0x4;
	constexpr uint32_t m_jiggleBone = 0x8;
}

namespace FeNodeBase_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t nDummy = 0x2;
	constexpr uint32_t nNodeX0 = 0x8;
	constexpr uint32_t nNodeX1 = 0xA;
	constexpr uint32_t nNodeY0 = 0xC;
	constexpr uint32_t nNodeY1 = 0xE;
	constexpr uint32_t qAdjust = 0x10;
}

namespace FeSimdNodeBase_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t nNodeX0 = 0x8;
	constexpr uint32_t nNodeX1 = 0x10;
	constexpr uint32_t nNodeY0 = 0x18;
	constexpr uint32_t nNodeY1 = 0x20;
	constexpr uint32_t nDummy = 0x28;
	constexpr uint32_t qAdjust = 0x30;
}

namespace FeQuad_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t flSlack = 0x8;
	constexpr uint32_t vShape = 0xC;
}

namespace FeSimdQuad_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t f4Slack = 0x20;
	constexpr uint32_t vShape = 0x30;
	constexpr uint32_t f4Weights = 0xF0;
}

namespace FeSimdTri_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t w1 = 0x30;
	constexpr uint32_t w2 = 0x40;
	constexpr uint32_t v1x = 0x50;
	constexpr uint32_t v2 = 0x60;
}

namespace FeSimdRodConstraint_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t f4MaxDist = 0x10;
	constexpr uint32_t f4MinDist = 0x20;
	constexpr uint32_t f4Weight0 = 0x30;
	constexpr uint32_t f4RelaxationFactor = 0x40;
}

namespace FeSimdRodConstraintAnim_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t f4Weight0 = 0x10;
	constexpr uint32_t f4RelaxationFactor = 0x20;
}

namespace FeRodConstraint_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t flMaxDist = 0x4;
	constexpr uint32_t flMinDist = 0x8;
	constexpr uint32_t flWeight0 = 0xC;
	constexpr uint32_t flRelaxationFactor = 0x10;
}

namespace FeTwistConstraint_t
{
	constexpr uint32_t nNodeOrient = 0x0;
	constexpr uint32_t nNodeEnd = 0x2;
	constexpr uint32_t flTwistRelax = 0x4;
	constexpr uint32_t flSwingRelax = 0x8;
}

namespace FeAxialEdgeBend_t
{
	constexpr uint32_t te = 0x0;
	constexpr uint32_t tv = 0x4;
	constexpr uint32_t flDist = 0x8;
	constexpr uint32_t flWeight = 0xC;
	constexpr uint32_t nNode = 0x1C;
}

namespace FeCtrlOffset_t
{
	constexpr uint32_t vOffset = 0x0;
	constexpr uint32_t nCtrlParent = 0xC;
	constexpr uint32_t nCtrlChild = 0xE;
}

namespace FeCtrlOsOffset_t
{
	constexpr uint32_t nCtrlParent = 0x0;
	constexpr uint32_t nCtrlChild = 0x2;
}

namespace FeFollowNode_t
{
	constexpr uint32_t nParentNode = 0x0;
	constexpr uint32_t nChildNode = 0x2;
	constexpr uint32_t flWeight = 0x4;
}

namespace FeCollisionPlane_t
{
	constexpr uint32_t nCtrlParent = 0x0;
	constexpr uint32_t nChildNode = 0x2;
	constexpr uint32_t m_Plane = 0x4;
	constexpr uint32_t flStrength = 0x14;
}

namespace FeNodeIntegrator_t
{
	constexpr uint32_t flPointDamping = 0x0;
	constexpr uint32_t flAnimationForceAttraction = 0x4;
	constexpr uint32_t flAnimationVertexAttraction = 0x8;
	constexpr uint32_t flGravity = 0xC;
}

namespace FeSpringIntegrator_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t flSpringRestLength = 0x4;
	constexpr uint32_t flSpringConstant = 0x8;
	constexpr uint32_t flSpringDamping = 0xC;
	constexpr uint32_t flNodeWeight0 = 0x10;
}

namespace FeSimdSpringIntegrator_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t flSpringRestLength = 0x10;
	constexpr uint32_t flSpringConstant = 0x20;
	constexpr uint32_t flSpringDamping = 0x30;
	constexpr uint32_t flNodeWeight0 = 0x40;
}

namespace FeWorldCollisionParams_t
{
	constexpr uint32_t flWorldFriction = 0x0;
	constexpr uint32_t flGroundFriction = 0x4;
	constexpr uint32_t nListBegin = 0x8;
	constexpr uint32_t nListEnd = 0xA;
}

namespace FeTaperedCapsuleStretch_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t nCollisionMask = 0x4;
	constexpr uint32_t nDummy = 0x6;
	constexpr uint32_t flRadius = 0x8;
}

namespace FeTaperedCapsuleRigid_t
{
	constexpr uint32_t vSphere = 0x0;
	constexpr uint32_t nNode = 0x20;
	constexpr uint32_t nCollisionMask = 0x22;
	constexpr uint32_t nVertexMapIndex = 0x24;
	constexpr uint32_t nFlags = 0x26;
}

namespace FeSphereRigid_t
{
	constexpr uint32_t vSphere = 0x0;
	constexpr uint32_t nNode = 0x10;
	constexpr uint32_t nCollisionMask = 0x12;
	constexpr uint32_t nVertexMapIndex = 0x14;
	constexpr uint32_t nFlags = 0x16;
}

namespace FeTreeChildren_t
{
	constexpr uint32_t nChild = 0x0;
}

namespace FeFitMatrix_t
{
	constexpr uint32_t bone = 0x0;
	constexpr uint32_t vCenter = 0x20;
	constexpr uint32_t nEnd = 0x2C;
	constexpr uint32_t nNode = 0x2E;
	constexpr uint32_t nBeginDynamic = 0x30;
}

namespace FeFitWeight_t
{
	constexpr uint32_t flWeight = 0x0;
	constexpr uint32_t nNode = 0x4;
	constexpr uint32_t nDummy = 0x6;
}

namespace FeNodeReverseOffset_t
{
	constexpr uint32_t vOffset = 0x0;
	constexpr uint32_t nBoneCtrl = 0xC;
	constexpr uint32_t nTargetNode = 0xE;
}

namespace FeAnimStrayRadius_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t flMaxDist = 0x4;
	constexpr uint32_t flRelaxationFactor = 0x8;
}

namespace FeSimdAnimStrayRadius_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t flMaxDist = 0x10;
	constexpr uint32_t flRelaxationFactor = 0x20;
}

namespace FeKelagerBend2_t
{
	constexpr uint32_t flWeight = 0x0;
	constexpr uint32_t flHeight0 = 0xC;
	constexpr uint32_t nNode = 0x10;
	constexpr uint32_t nReserved = 0x16;
}

namespace FeCtrlSoftOffset_t
{
	constexpr uint32_t nCtrlParent = 0x0;
	constexpr uint32_t nCtrlChild = 0x2;
	constexpr uint32_t vOffset = 0x4;
	constexpr uint32_t flAlpha = 0x10;
}

namespace FeTri_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t w1 = 0x8;
	constexpr uint32_t w2 = 0xC;
	constexpr uint32_t v1x = 0x10;
	constexpr uint32_t v2 = 0x14;
}

namespace FeBoxRigid_t
{
	constexpr uint32_t tmFrame2 = 0x0;
	constexpr uint32_t nNode = 0x20;
	constexpr uint32_t nCollisionMask = 0x22;
	constexpr uint32_t vSize = 0x24;
	constexpr uint32_t nVertexMapIndex = 0x30;
	constexpr uint32_t nFlags = 0x32;
}

namespace FeRigidColliderIndices_t
{
	constexpr uint32_t m_nTaperedCapsuleRigidIndex = 0x0;
	constexpr uint32_t m_nSphereRigidIndex = 0x2;
	constexpr uint32_t m_nBoxRigidIndex = 0x4;
	constexpr uint32_t m_nCollisionPlaneIndex = 0x6;
}

namespace FeMorphLayerDepr_t
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_nNameHash = 0x8;
	constexpr uint32_t m_Nodes = 0x10;
	constexpr uint32_t m_InitPos = 0x28;
	constexpr uint32_t m_Gravity = 0x40;
	constexpr uint32_t m_GoalStrength = 0x58;
	constexpr uint32_t m_GoalDamping = 0x70;
	constexpr uint32_t m_nFlags = 0x88;
}

namespace FeVertexMapDesc_t
{
	constexpr uint32_t sName = 0x0;
	constexpr uint32_t nNameHash = 0x8;
	constexpr uint32_t nColor = 0xC;
	constexpr uint32_t nFlags = 0x10;
	constexpr uint32_t nVertexBase = 0x14;
	constexpr uint32_t nVertexCount = 0x16;
	constexpr uint32_t nMapOffset = 0x18;
	constexpr uint32_t nNodeListOffset = 0x1C;
	constexpr uint32_t vCenterOfMass = 0x20;
	constexpr uint32_t flVolumetricSolveStrength = 0x2C;
	constexpr uint32_t nScaleSourceNode = 0x30;
	constexpr uint32_t nNodeListCount = 0x32;
}

namespace FeEffectDesc_t
{
	constexpr uint32_t sName = 0x0;
	constexpr uint32_t nNameHash = 0x8;
	constexpr uint32_t nType = 0xC;
	constexpr uint32_t m_Params = 0x10;
}

namespace FeNodeWindBase_t
{
	constexpr uint32_t nNodeX0 = 0x0;
	constexpr uint32_t nNodeX1 = 0x2;
	constexpr uint32_t nNodeY0 = 0x4;
	constexpr uint32_t nNodeY1 = 0x6;
}

namespace FourVectors2D
{
	constexpr uint32_t x = 0x0;
	constexpr uint32_t y = 0x10;
}

namespace FeEdgeDesc_t
{
	constexpr uint32_t nEdge = 0x0;
	constexpr uint32_t nSide = 0x4;
	constexpr uint32_t nVirtElem = 0xC;
}

namespace OldFeEdge_t
{
	constexpr uint32_t m_flK = 0x0;
	constexpr uint32_t invA = 0xC;
	constexpr uint32_t t = 0x10;
	constexpr uint32_t flThetaRelaxed = 0x14;
	constexpr uint32_t flThetaFactor = 0x18;
	constexpr uint32_t c01 = 0x1C;
	constexpr uint32_t c02 = 0x20;
	constexpr uint32_t c03 = 0x24;
	constexpr uint32_t c04 = 0x28;
	constexpr uint32_t flAxialModelDist = 0x2C;
	constexpr uint32_t flAxialModelWeights = 0x30;
	constexpr uint32_t m_nNode = 0x40;
}

namespace FeWeightedNode_t
{
	constexpr uint32_t nNode = 0x0;
	constexpr uint32_t nWeight = 0x2;
}

namespace FeStiffHingeBuild_t
{
	constexpr uint32_t flMaxAngle = 0x0;
	constexpr uint32_t flStrength = 0x4;
	constexpr uint32_t flMotionBias = 0x8;
	constexpr uint32_t nNode = 0x14;
}

namespace FeBandBendLimit_t
{
	constexpr uint32_t flDistMin = 0x0;
	constexpr uint32_t flDistMax = 0x4;
	constexpr uint32_t nNode = 0x8;
}

namespace FeSoftParent_t
{
	constexpr uint32_t nParent = 0x0;
	constexpr uint32_t flAlpha = 0x4;
}

namespace RnPlane_t
{
	constexpr uint32_t m_vNormal = 0x0;
	constexpr uint32_t m_flOffset = 0xC;
}

namespace CovMatrix3
{
	constexpr uint32_t m_vDiag = 0x0;
	constexpr uint32_t m_flXY = 0xC;
	constexpr uint32_t m_flXZ = 0x10;
	constexpr uint32_t m_flYZ = 0x14;
}

namespace FourCovMatrices3
{
	constexpr uint32_t m_vDiag = 0x0;
	constexpr uint32_t m_flXY = 0x30;
	constexpr uint32_t m_flXZ = 0x40;
	constexpr uint32_t m_flYZ = 0x50;
}

namespace FeFitInfluence_t
{
	constexpr uint32_t nVertexNode = 0x0;
	constexpr uint32_t flWeight = 0x4;
	constexpr uint32_t nMatrixNode = 0x8;
}

namespace FeBuildTaperedCapsuleRigid_t
{
	constexpr uint32_t m_nPriority = 0x30;
	constexpr uint32_t m_nVertexMapHash = 0x34;
}

namespace FeBuildBoxRigid_t
{
	constexpr uint32_t m_nPriority = 0x40;
	constexpr uint32_t m_nVertexMapHash = 0x44;
}

namespace FeBuildSphereRigid_t
{
	constexpr uint32_t m_nPriority = 0x20;
	constexpr uint32_t m_nVertexMapHash = 0x24;
}

namespace FeSourceEdge_t
{
	constexpr uint32_t nNode = 0x0;
}

namespace FeVertexMapBuild_t
{
	constexpr uint32_t m_VertexMapName = 0x0;
	constexpr uint32_t m_nNameHash = 0x8;
	constexpr uint32_t m_Color = 0xC;
	constexpr uint32_t m_flVolumetricSolveStrength = 0x10;
	constexpr uint32_t m_nScaleSourceNode = 0x14;
	constexpr uint32_t m_Weights = 0x18;
}

namespace CFeVertexMapBuildArray
{
	constexpr uint32_t m_Array = 0x0;
}

namespace FeProxyVertexMap_t
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_flWeight = 0x8;
}

namespace CFeMorphLayer
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_nNameHash = 0x8;
	constexpr uint32_t m_Nodes = 0x10;
	constexpr uint32_t m_InitPos = 0x28;
	constexpr uint32_t m_Gravity = 0x40;
	constexpr uint32_t m_GoalStrength = 0x58;
	constexpr uint32_t m_GoalDamping = 0x70;
}

namespace Dop26_t
{
	constexpr uint32_t m_flSupport = 0x0;
}

namespace RnCapsule_t
{
	constexpr uint32_t m_vCenter = 0x0;
	constexpr uint32_t m_flRadius = 0x18;
}

namespace RnVertex_t
{
	constexpr uint32_t m_nEdge = 0x0;
}

namespace RnHalfEdge_t
{
	constexpr uint32_t m_nNext = 0x0;
	constexpr uint32_t m_nTwin = 0x1;
	constexpr uint32_t m_nOrigin = 0x2;
	constexpr uint32_t m_nFace = 0x3;
}

namespace RnFace_t
{
	constexpr uint32_t m_nEdge = 0x0;
}

namespace CRegionSVM
{
	constexpr uint32_t m_Planes = 0x0;
	constexpr uint32_t m_Nodes = 0x18;
}

namespace RnHull_t
{
	constexpr uint32_t m_vCentroid = 0x0;
	constexpr uint32_t m_flMaxAngularRadius = 0xC;
	constexpr uint32_t m_Bounds = 0x10;
	constexpr uint32_t m_vOrthographicAreas = 0x28;
	constexpr uint32_t m_MassProperties = 0x34;
	constexpr uint32_t m_flVolume = 0x64;
	constexpr uint32_t m_flSurfaceArea = 0x68;
	constexpr uint32_t m_Vertices = 0x70;
	constexpr uint32_t m_VertexPositions = 0x88;
	constexpr uint32_t m_Edges = 0xA0;
	constexpr uint32_t m_Faces = 0xB8;
	constexpr uint32_t m_FacePlanes = 0xD0;
	constexpr uint32_t m_nFlags = 0xE8;
	constexpr uint32_t m_pRegionSVM = 0xF0;
}

namespace RnTriangle_t
{
	constexpr uint32_t m_nIndex = 0x0;
}

namespace RnWing_t
{
	constexpr uint32_t m_nIndex = 0x0;
}

namespace RnNode_t
{
	constexpr uint32_t m_vMin = 0x0;
	constexpr uint32_t m_nChildren = 0xC;
	constexpr uint32_t m_vMax = 0x10;
	constexpr uint32_t m_nTriangleOffset = 0x1C;
}

namespace RnMesh_t
{
	constexpr uint32_t m_vMin = 0x0;
	constexpr uint32_t m_vMax = 0xC;
	constexpr uint32_t m_Nodes = 0x18;
	constexpr uint32_t m_Vertices = 0x30;
	constexpr uint32_t m_Triangles = 0x48;
	constexpr uint32_t m_Wings = 0x60;
	constexpr uint32_t m_Materials = 0x78;
	constexpr uint32_t m_vOrthographicAreas = 0x90;
	constexpr uint32_t m_nFlags = 0x9C;
	constexpr uint32_t m_nDebugFlags = 0xA0;
}

namespace RnShapeDesc_t
{
	constexpr uint32_t m_nCollisionAttributeIndex = 0x0;
	constexpr uint32_t m_nSurfacePropertyIndex = 0x4;
	constexpr uint32_t m_UserFriendlyName = 0x8;
}

namespace RnBlendVertex_t
{
	constexpr uint32_t m_nWeight0 = 0x0;
	constexpr uint32_t m_nIndex0 = 0x2;
	constexpr uint32_t m_nWeight1 = 0x4;
	constexpr uint32_t m_nIndex1 = 0x6;
	constexpr uint32_t m_nWeight2 = 0x8;
	constexpr uint32_t m_nIndex2 = 0xA;
	constexpr uint32_t m_nFlags = 0xC;
	constexpr uint32_t m_nTargetIndex = 0xE;
}

namespace CastSphereSATParams_t
{
	constexpr uint32_t m_vRayStart = 0x0;
	constexpr uint32_t m_vRayDelta = 0xC;
	constexpr uint32_t m_flRadius = 0x18;
	constexpr uint32_t m_flMaxFraction = 0x1C;
	constexpr uint32_t m_flScale = 0x20;
	constexpr uint32_t m_pHull = 0x28;
}

namespace RnBodyDesc_t
{
	constexpr uint32_t m_sDebugName = 0x0;
	constexpr uint32_t m_vPosition = 0x8;
	constexpr uint32_t m_qOrientation = 0x14;
	constexpr uint32_t m_vLinearVelocity = 0x24;
	constexpr uint32_t m_vAngularVelocity = 0x30;
	constexpr uint32_t m_vLocalMassCenter = 0x3C;
	constexpr uint32_t m_LocalInertiaInv = 0x48;
	constexpr uint32_t m_flMassInv = 0x6C;
	constexpr uint32_t m_flGameMass = 0x70;
	constexpr uint32_t m_flInertiaScaleInv = 0x74;
	constexpr uint32_t m_flLinearDamping = 0x78;
	constexpr uint32_t m_flAngularDamping = 0x7C;
	constexpr uint32_t m_flLinearDrag = 0x80;
	constexpr uint32_t m_flAngularDrag = 0x84;
	constexpr uint32_t m_flLinearBuoyancyDrag = 0x88;
	constexpr uint32_t m_flAngularBuoyancyDrag = 0x8C;
	constexpr uint32_t m_vLastAwakeForceAccum = 0x90;
	constexpr uint32_t m_vLastAwakeTorqueAccum = 0x9C;
	constexpr uint32_t m_flBuoyancyFactor = 0xA8;
	constexpr uint32_t m_flGravityScale = 0xAC;
	constexpr uint32_t m_flTimeScale = 0xB0;
	constexpr uint32_t m_nBodyType = 0xB4;
	constexpr uint32_t m_nGameIndex = 0xB8;
	constexpr uint32_t m_nGameFlags = 0xBC;
	constexpr uint32_t m_nMinVelocityIterations = 0xC0;
	constexpr uint32_t m_nMinPositionIterations = 0xC1;
	constexpr uint32_t m_nMassPriority = 0xC2;
	constexpr uint32_t m_bEnabled = 0xC3;
	constexpr uint32_t m_bSleeping = 0xC4;
	constexpr uint32_t m_bIsContinuousEnabled = 0xC5;
	constexpr uint32_t m_bDragEnabled = 0xC6;
	constexpr uint32_t m_bBuoyancyDragEnabled = 0xC7;
	constexpr uint32_t m_bGravityDisabled = 0xC8;
	constexpr uint32_t m_bSpeculativeEnabled = 0xC9;
	constexpr uint32_t m_bHasShadowController = 0xCA;
}

namespace VertexPositionNormal_t
{
	constexpr uint32_t m_vPosition = 0x0;
	constexpr uint32_t m_vNormal = 0xC;
}

namespace VertexPositionColor_t
{
	constexpr uint32_t m_vPosition = 0x0;
}

namespace vphysics_save_cphysicsbody_t
{
	constexpr uint32_t m_nOldPointer = 0xD0;
}

