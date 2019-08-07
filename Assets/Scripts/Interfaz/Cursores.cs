using UnityEngine;

public class Cursores : MonoBehaviour
{
    public Texture2D cursor1;
    public Texture2D cursor2;

    public void Entra()
    {
        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);
    }

    public void Sale()
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);
    }
}
