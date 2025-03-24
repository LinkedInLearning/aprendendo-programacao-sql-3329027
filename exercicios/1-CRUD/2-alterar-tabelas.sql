-- Na tabela salario_classe altere o atributo "nivel" para que seu tipo de dado seja varchar, com tamanho máximo de 50 caracteres

-- Na tabela employees, adicione uma coluna para receber o id_salario
alter table salario_classe
DROP salario;

ALTER TABLE salario_classe
ADD salario varchar(50);

ALTER table employees
ADD id_salario INTEGER;

