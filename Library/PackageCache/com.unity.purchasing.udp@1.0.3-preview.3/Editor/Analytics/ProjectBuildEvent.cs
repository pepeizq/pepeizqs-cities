using UnityEditor;
using UnityEditor.Callbacks;

namespace UnityEngine.UDP.Editor.Analytics
{
    public static class ProjectBuildEvent
    {
        [PostProcessBuildAttribute]
        public static void OnPostProcessBuild(BuildTarget target, string pathToBuildProject)
        {
            if (target == BuildTarget.Android)
            {
                // Send to Analytics
                EditorAnalyticsReqStruct reqStruct = new EditorAnalyticsReqStruct
                {
                    eventName = EditorAnalyticsApi.k_ProjectBuildEventName,
                    webRequest = EditorAnalyticsApi.ProjectBuildEvent(),
                };

                WebRequestQueue.Enqueue(reqStruct);
            }
        }
    }
}