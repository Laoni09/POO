class Conta{
  private: //Atributos
    double saldo;
    char numero[11];
    char agencia[11];
  public: //Métodos
    void creditar(double v);
    void debitar(double v);
    double getSaldo();
    Conta(char* num, char* ag);
};
