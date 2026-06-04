#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

// 填空题B: 钟表
// 12小时制，分针与时针夹角A = 2×(分针与秒针夹角B)，求满足的时刻（时:分:秒）

// const double th=0.1;        // 时针速度：0.1°/s 错
// const double tm=0.5;        // 分针速度：0.5 错
// const double ts=1;          // 秒针速度：1 错
const int FULL = 43200;        // 1圈=43200单位(60,3600,43200的LCM)
const int HALF = 21600;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int hour=3600;
    // int ans=0;
    int ans = 0;

    // for(int i=1;i<=hour*6;i++){
    for (int i = 1; i <= 25199; i++) {   // 0:00:01 ~ 6:59:59

        // double oh=th*i;              // 时针角度，速度错+没取模
        // double om=tm*i%3600;         // 分针角度，速度错+模数错
        // double os=ts*i%60;           // 秒针角度，速度错+模数错
        int pos_h = i % 43200;          // 时针：43200秒1圈，每圈43200单位
        int pos_m = (i % 3600) * 12;    // 分针：3600秒1圈，1秒=12单位
        int pos_s = (i % 60) * 720;     // 秒针：60秒1圈，1秒=720单位

        // double a;double b;
        int a, b;

        // if(abs(oh-om)>180){
        //     a=abs(oh-om)-180;            // 夹角公式反了：应该360-diff
        // }else a=abs(oh-om);
        {
            int d = abs(pos_m - pos_h);
            if (d > HALF) d = FULL - d;
            a = d;                         // A = 分针与时针夹角
        }

        // if(abs(os-om)>180){
        //     a=abs(os-om)-180;            // 又写的a！把上面的A盖了
        // }else a=abs(os-om);
        {
            int d = abs(pos_m - pos_s);
            if (d > HALF) d = FULL - d;
            b = d;                         // B = 分针与秒针夹角
        }

        // if(a==2*b){                     // a,b未正确赋值 + ==比浮点
        if (b > 0 && a == 2 * b) {         // b>0排除三针重合(0:0:0)
            ans = i;
            break;
        }

    }
    // cout<<ans/3600<<' '<<ans%3600/60<<' '<<asn%3600%60;  // asn笔误
    cout << ans / 3600 << ' ' << ans % 3600 / 60 << ' ' << ans % 60;
    return 0;
}
