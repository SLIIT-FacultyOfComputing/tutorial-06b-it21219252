class Box{
    private:
       int length;
       int width;
       int height;
    public:
       int getHeight();
       int getLength();
       int getWidth();
       void setHeight(int h);
       void setLength(int l);
       void setWidth(int w);
       int calcVolume();
};  