extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);
class FakeComponent; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; 
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 87 non stripped classes
	//0. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//1. Animator
	RegisterUnityClass<Animator>("Animation");
	//2. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//3. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//4. Motion
	RegisterUnityClass<Motion>("Animation");
	//5. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//6. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//7. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//8. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//9. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//10. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//11. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//12. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//13. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//14. Camera
	RegisterUnityClass<Camera>("Core");
	//15. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//16. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//17. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//18. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//19. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//20. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//21. GameManager
	RegisterUnityClass<GameManager>("Core");
	//22. GameObject
	RegisterUnityClass<GameObject>("Core");
	//23. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//24. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//25. InputManager
	RegisterUnityClass<InputManager>("Core");
	//26. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//27. Light
	RegisterUnityClass<Light>("Core");
	//28. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//29. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//30. Material
	RegisterUnityClass<Material>("Core");
	//31. Mesh
	RegisterUnityClass<Mesh>("Core");
	//32. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//33. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//34. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//35. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//36. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//37. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//38. Object
	//Skipping Object
	//39. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//40. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//41. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//42. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//43. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//44. Renderer
	RegisterUnityClass<Renderer>("Core");
	//45. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//46. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//47. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//48. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//49. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//50. Shader
	RegisterUnityClass<Shader>("Core");
	//51. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//52. Skybox
	RegisterUnityClass<Skybox>("Core");
	//53. Sprite
	RegisterUnityClass<Sprite>("Core");
	//54. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//55. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//56. TagManager
	RegisterUnityClass<TagManager>("Core");
	//57. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//58. Texture
	RegisterUnityClass<Texture>("Core");
	//59. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//60. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//61. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//62. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//63. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//64. Transform
	RegisterUnityClass<Transform>("Core");
	//65. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//66. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//67. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//68. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//69. Collider
	RegisterUnityClass<Collider>("Physics");
	//70. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//71. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//72. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//73. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//74. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//75. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//76. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//77. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//78. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//79. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//80. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//81. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//82. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//83. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//84. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//85. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");
	//86. WorldAnchor
	//Skipping WorldAnchor

}
