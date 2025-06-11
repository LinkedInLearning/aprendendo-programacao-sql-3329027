-- Na tabela salario_classe altere o atributo "nivel" para que seu tipo de dado seja varchar, com tamanho máximo de 50 caracteres
INSERT INTO nova_salario_classe (id,salario)
SELECT id,salario FROM salario_classe

DROP TABLE salario_classe

ALTER TABLE nova_salario_classe1 RENAME TO salario_classe

ALTER TABLE salario_classe
ADD COLUMN nivel varchar(50)

-- Na tabela employees, adicione uma coluna para receber o id_salario
ALTER TABLE employees
ADD id_salario INTEGER; 