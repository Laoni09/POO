Ex1 - Redefini o método debitar() em ContaEspecial. Quando cria-se um objeto da classe ContaEspecial, o compilador utiliza o método debitar() da subclasse.
Ex2 - Mudei a main. Criei um objeto Conta c2 e utilizei o construtor da classe ContaVIP. Pra utilizar o método renderBonus(), fiz dynamic_cast. Coloquei o operador de escopo no método para chamar o creditar da classe base.
Ex3 - Coloquei "virtual" no método creditar() da classe Conta e criei o método creditar() na classe ContaVIP (polimorfismo por redefinição).
Ex4 - Criei um método compararSaldo() na classe Conta.