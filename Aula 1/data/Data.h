class Data{
 private:
  unsigned int dia;
  unsigned int mes;
  unsigned int ano;
 public:
  unsigned int getDia();
  unsigned int getMes();
  unsigned int getAno();
  void setDia(unsigned int d);
  void setMes(unsigned int m);
  void setAno(unsigned int a);
  Data(unsigned int d, unsigned int m, unsigned int a);
};
