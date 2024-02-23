namespace YXCell
{
    public class ModuleConfig
    {
        public string moduleName;
        public string moduleVersion;
        public string moduleUrl;

        public object DownloadUrl
        {
            get
            {
                return $"{moduleUrl}/{moduleName}/{moduleVersion}";
            }
        }
    }
}