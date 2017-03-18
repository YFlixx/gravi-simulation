class ode{
   public:
      static void euler(float y[],int n,float dt, float (derivative)(int,int,float*));
};
