/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:54:35 by gmillon           #+#    #+#             */
/*   Updated: 2022/05/19 13:55:37 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	swap(int *copy, int i, int *made_change)
{
	int	tmp;

	*made_change = 1;
	tmp = copy[i];
	copy[i] = copy[i + 1];
	copy[i + 1] = tmp;
}

int	*ft_bubblesort(int *tab, int size)
{
	int	i;
	int	j;
	int	*copy;
	int	made_change;

	copy = malloc(sizeof(int) * size);
	ft_memcpy(copy, tab, size * sizeof(int));
	i = 0;
	j = 0;
	made_change = 1;
	while (j <= size && made_change)
	{
		i = 0;
		made_change = 0;
		while (i < size - 1)
		{
			if (copy[i] > copy[i + 1])
				swap(copy, i, &made_change);
			i++;
		}
		j++;
	}
	return (copy);
}

// int main (void)
// {
// 	int x[] = {822, 213, 731, 1294, 2180, 1079, 1811, 144, 1993, 1632, 316, 2197, 436, 194, 2021, 832, 906, 431, 382, 1855, 1448, 1984, 88, 271, 1717, 1469, 554, 514, 817, 1806, 1185, 632, 962, 2038, 1480, 335, 1474, 1386, 842, 2217, 435, 1718, 1123, 2243, 2267, 2343, 767, 619, 2136, 371, 94, 544, 430, 3, 334, 2056, 1861, 1000, 803, 2143, 598, 2294, 1387, 1503, 744, 1261, 635, 274, 611, 157, 49, 1251, 804, 864, 875, 1160, 741, 422, 1829, 449, 320, 1683, 860, 2312, 91, 1322, 1426, 793, 2003, 1195, 1529, 1996, 1173, 1819, 1421, 2015, 2326, 868, 1701, 789, 165, 1232, 1096, 353, 1565, 1255, 115, 1911, 1053, 1948, 952, 2050, 1105, 829, 901, 1707, 781, 377, 1620, 2193, 1690, 905, 2165, 1944, 926, 1558, 2321, 954, 2081, 1835, 2104, 1087, 122, 1350, 883, 1228, 239, 1945, 1069, 185, 2064, 1533, 383, 1066, 677, 2163, 1839, 1876, 548, 1027, 2135, 892, 648, 531, 1064, 918, 927, 1731, 1641, 1250, 2132, 1777, 1473, 826, 281, 1966, 441, 1356, 1367, 1743, 302, 1547, 72, 1997, 1463, 1026, 1323, 1153, 204, 914, 869, 2133, 1682, 2014, 1247, 1256, 1446, 1593, 2313, 999, 381, 395, 1978, 899, 2073, 539, 200, 1014, 1001, 1238, 1265, 1033, 1926, 1224, 1957, 1245, 2268, 662, 173, 182, 1369, 1798, 1837, 848, 2309, 1942, 1918, 1574, 928, 942, 1340, 1328, 1617, 1790, 1704, 2283, 1868, 1666, 2307, 2077, 401, 505, 588, 1289, 1486, 2184, 1768, 2164, 1492, 1782, 1285, 1733, 2295, 2218, 624, 289, 1260, 272, 1363, 1454, 1864, 506, 1686, 1744, 25, 1787, 716, 853, 835, 2102, 1865, 267, 153, 2118, 1685, 600, 637, 98, 1439, 58, 148, 126, 1410, 583, 1636, 724, 2204, 59, 1332, 1299, 217, 754, 104, 1048, 238, 133, 2256, 234, 1191, 421, 1716, 259, 249, 1161, 268, 1104, 1990, 2277, 1889, 321, 325, 961, 57, 1882, 511, 411, 1576, 1166, 2279, 633, 1723, 1134, 216, 291, 1122, 668, 686, 2227, 533, 2198, 1826, 1008, 1896, 688, 1275, 944, 1638, 979, 132, 1217, 881, 2300, 1958, 2027, 1726, 1067, 1252, 30, 691, 565, 749, 758, 111, 1315, 937, 1404, 80, 1089, 331, 467, 1545, 909, 1090, 1935, 1965, 41, 2008, 496, 2103, 1150, 351, 1411, 1599, 1838, 904, 2310, 1060, 2289, 519, 387, 2100, 520, 75, 1029, 2178, 1391, 1519, 2139, 917, 1088, 2341, 862, 1612, 1409, 1353, 354, 1792, 1791, 1856, 1596, 53, 551, 2069, 1500, 1752, 1450, 2157, 1220, 796, 675, 966, 365, 1635, 616, 1668, 1692, 2134, 1145, 220, 851, 423, 807, 1751, 779, 1111, 1342, 518, 776, 1327, 838, 1257, 1560, 1858, 81, 775, 1349, 502, 1982, 1326, 1440, 534, 698, 595, 981, 1662, 1098, 1186, 1100, 1885, 1818, 226, 1139, 933, 1989, 1962, 1831, 1552, 230, 1573, 1622, 718, 1897, 665, 935, 386, 1010, 525, 2115, 2079, 410, 1009, 885, 477, 1288, 1011, 577, 2000, 1586, 2249, 1435, 1138, 1101, 516, 1891, 1290, 921, 1637, 890, 2221, 1240, 1423, 188, 1292, 495, 1018, 1097, 2210, 1422, 591, 997, 993, 342, 739, 329, 1952, 35, 1950, 1464, 327, 1644};
// 	int *y = ft_bubblesort(x, 500);
// 	int i;
// 	printf("[");
// 	for (i = 0; i < 500; i++)
// 	{
// 		printf("%d, ", y[i]);
// 	}
// 	printf("]");

// }