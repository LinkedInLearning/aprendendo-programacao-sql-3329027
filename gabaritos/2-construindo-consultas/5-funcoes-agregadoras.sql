-- Para a tabela "invoices", crie uma consulta que retorne o país e a soma das compras realizadas nele, bem como o valor da compra mínima e máxima, a quantidade de compras realizadas e o ticket médio de cada compra.

SELECT
BillingCountry as pais,
SUM(Total) as soma_compras,
COUNT(Total) as qnt_compras_realizadas,
MIN(Total) as menor_compra,
MAX(Total) as maior_compra,
ROUND(AVG(Total), 2) as ticket_medio
FROM
invoices
WHERE
BillingCountry = 'Austria';