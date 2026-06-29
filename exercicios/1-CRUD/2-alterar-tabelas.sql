-- Na tabela salario_classe altere o atributo "nivel" para que seu tipo de dado seja varchar, com tamanho máximo de 50 caracteres
alter table salario_classe
add nivel varchar(50);
-- Na tabela employees, adicione uma coluna para receber o id_salario
ALTER TABLE employees
ADD id_salario INTEGER;