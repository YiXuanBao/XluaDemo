
namespace YXCell
{
    /// <summary>
    /// ���̳�Mono�ĵ���ģʽ
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class Singleton<T> where T : class, new()
    {
        protected Singleton() { }

        private static T _inst = null;

        public static T Instance => _inst ?? (_inst = new T());

        public static void Clear()
        {
            _inst = null;
        }
    }
}