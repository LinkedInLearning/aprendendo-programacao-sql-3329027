-- Crie uma consulta para a tabela "customers" que resulte nas colunas CustomerId, FirstName, LastName, Company e Country. Use a cláusula WHERE para filtrar apenas as linhas cujo o valor na coluna Country corresponda a Brazil

SELECT
CustomerId,
FirstName,
LastName,
Company,
Country
FROM customers
WHERE Country LIKE 'Brazil';

-- Na consulta anterior, utilize o símbolo de coringa para construir padrões textuais
SELECT
CustomerId,
FirstName,
LastName,
Company,
Country
FROM customers
WHERE Country LIKE 'Bra%';


SELECT
CustomerId,
FirstName,
LastName,
Company,
Country
FROM customers
WHERE Country LIKE '%zil';