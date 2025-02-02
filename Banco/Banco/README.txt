Ex1) só troquei o tipo de double pra int na classe ContaEspecial, alterando a assinatura do método (polimorfismo por sobrecarga ou substituição).
Ex2) só mudei a main. Criei um objeto Conta c2 e utilizei o construtor da classe ContaVIP. Pra utilizar o método renderBonus(), fiz dynamic_cast. coloquei o operador de escopo pra chamar o creditar da classe base.;
Ex3) coloquei "virtual" no método creditar() da classe Conta e criei o método creditar() na classe ContaVIP (polimorfismo por redefinição).
Ex4) Só criei um método compararSaldo() na classe Conta.