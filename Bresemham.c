void CBresenhamDlg::Bresham(int x1, int y1, int x2, int y2, int color)
{
    CPaintDC dc(this);
    int dx, dy, d;
    int x = x1, y = y1;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    d = 2 * dy - dx;
    for (x1; x <= x2; x++)
    {
        SetPixel(dc, x, y, color);
        if (d > 0)
        {
            y++;
            d = d + 2 * (dy - dx);
        }
        else
        {
            d = d + 2 * dy;
        }
    }
}

int main(){
    scanf("%d", x);
    scanf("%d", y);
    
}