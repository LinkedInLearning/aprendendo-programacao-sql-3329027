-- min - retorna o valor mínimo de uma coluna
SELECT DISTINCT
MIN(Total) AS menor_compra
FROM
invoices;

-- max - retorna o valor máximo armazenado em uma coluna
SELECT DISTINCT
MAX(Total) AS maior_compra
FROM
invoices;

count - resulta na contagem de valores não nulos de uma coluna
SELECT DISTINCT
COUNT(InvoiceId) AS qnt_total_compras
FROM
invoices;

sum - soma os valores de uma coluna. Pode ser usado com um where
SELECT
BillingCountry AS pais,
SUM(Total) AS soma_compras
FROM
invoices;

avg - média aritmética dos valores de uma determinada coluna