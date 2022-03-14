class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int l);
       void setWidth(int w);
       void setHeight(int h);

       void getLength(int l);
       void getWidth(int w);
       void getHeight(int h);
      
       int calcVolume();
};
