#include <string>

namespace ceng391 {
typedef unsigned char uchar;

class Image
{
public:
        Image(int width, int height, int n_channels,int red=0, int green=0, int blue=0, int alpha= 255, int step=-1);
        ~Image();

        int w() const { return m_width; }
        int h() const { return m_height; }
        int step() const { return m_step; }
        int channel() const { return m_n_channels; }
	int r() const { return m_red; }
	int g() const { return m_green; }
	int b() const { return m_blue; }
	int a() const { return m_alpha; }


        const uchar *data() const { return m_data; }
        uchar *      data()       { return m_data; }
        const uchar *data(int y) const { return m_data + y*m_step; }
        uchar *      data(int y)       { return m_data + y*m_step; }

        void set(uchar value[]){ set_rect(0, 0, m_width, m_height, m_n_channels, value);}
        void set_rect(int x_tl, int y_tl, int width, int height, int n_channels, uchar value[]);
        void xsave_pnm(const std::string& filename) const;
private:
        int m_width;
        int m_height;
        int m_step;
	int m_n_channels;
	int m_red;
	int m_green;
	int m_blue;
	int m_alpha;

        uchar *m_data;
};

}
