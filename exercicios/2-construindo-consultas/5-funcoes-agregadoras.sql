-- Para a tabela "invoices", crie uma consulta que retorne o país e a soma das compras realizadas nele, bem como o valor da compra mínima e máxima, a quantidade de compras realizadas e o ticket médio de cada compra.
SELECT
BILLINGCOUNTRY AS PAIS,
SUM(TOTAL) AS TOTAL_COMPRAS,
MIN(TOTAL) AS VALOR_MINIMO,
MAX(TOTAL) AS VALOR_MAXIMO,
ROUND(AVG(TOTAL),2) AS TICKET_MEDIO,
COUNT(TOTAL) AS QUANTIDADE_DE_COMPRAS
FROM INVOICES
WHERE BILLINGCOUNTRY = 'Brazil';


