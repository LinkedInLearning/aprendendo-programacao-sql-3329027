-- Para a tabela "customers" crie uma consulta que retorne apenas os valores únicos da coluna Country
SELECT DISTINCT
Country
FROM
customers;

-- Na consulta anterior, adicione a coluna Company para verificar as combinações únicas entre empresas e países
SELECT DISTINCT
Country,
Company
FROM
customers;

-- Nesta mesma consulta, atribua um alias com título em português para cada coluna
SELECT DISTINCT
Country as pais,
Company as empresa
FROM
customers;