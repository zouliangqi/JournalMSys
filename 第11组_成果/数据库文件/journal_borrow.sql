-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: 101.132.122.108    Database: journal
-- ------------------------------------------------------
-- Server version	5.6.36-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `borrow`
--

DROP TABLE IF EXISTS `borrow`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `borrow` (
  `bookname` varchar(45) NOT NULL,
  `kanhao` varchar(45) NOT NULL,
  `year` char(4) NOT NULL,
  `reel` char(11) NOT NULL,
  `season` char(11) NOT NULL,
  `bamount` char(11) NOT NULL,
  `bstate` char(4) NOT NULL,
  `bdate` datetime(6) DEFAULT NULL,
  `id` varchar(20) NOT NULL,
  `borrownum` char(10) NOT NULL,
  PRIMARY KEY (`borrownum`,`kanhao`,`id`,`year`,`reel`,`season`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `borrow`
--

LOCK TABLES `borrow` WRITE;
/*!40000 ALTER TABLE `borrow` DISABLE KEYS */;
INSERT INTO `borrow` VALUES ('国家安全通讯','11-2348/D','2147','2','5','1','1','2017-09-15 00:00:00.000000','100006','0'),('财经界','11-4098/F','2017','3','7','2','1','0000-00-00 00:00:00.000000','100003','0'),('财经界','11-4098/F','2147','6','6','1','0','2017-09-16 00:00:00.000000','100007','0'),('散文','12-1032/G4','2147','4','4','1','0','2017-09-13 00:00:00.000000','100004','0'),('探索与求是','13-1021/C','2147','3','2','1','1','2017-09-14 00:00:00.000000','100005','0'),('意林','22-1361/1','2147','34','1','1','1','2017-09-10 00:00:00.000000','100010','0'),('儿科药学杂志','50-1156/R','2147','1','4','1','0','2017-09-17 00:00:00.000000','100008','0'),('中原文化研究','CN41-1426/C','1994','1','1','1','1','2017-09-18 00:00:00.000000','100009','0'),('知音漫客','CN42-1776/J','2147','56','3','1','1','2017-09-12 00:00:00.000000','100003','0'),('漫客·小说绘','CN42-1810/J','2147','5','2','1','0','2017-09-11 00:00:00.000000','100002','0'),('国外财经','CN43-1088/F','2147','1','2','1','1','2017-09-19 00:00:00.000000','100010','0'),('财经界','11-4098/F','2017','3','7','3','1',NULL,'100003','12569'),('儿科药学杂志','50-1156/R','2017','2','4','3','1',NULL,'100006','133166'),('财经界','11-4098/F','2017','3','7','2','1',NULL,'100010','151279'),('财经界','11-4098/F','2017','3','7','2','1',NULL,'100003','153734'),('散文','12-1032/G4','2017','5','12','0','1',NULL,'100010','16068'),('中原文化研究','CN41-1426/C','2017','4','12','10','1',NULL,'100010','445780'),('财经界','11-4098/F','2017','3','7','11','1',NULL,'100003','460079'),('散文','12-1032/G4','2017','5','12','0','1',NULL,'100010','511961'),('中原文化研究','CN41-1426/C','2017','4','12','9','1',NULL,'100003','602623'),('财经界','11-4098/F','2017','3','7','2','1',NULL,'100003','704968'),('财经界','11-4098/F','2017','3','7','2','0',NULL,'100005','784714'),('财经界','11-4098/F','2017','3','7','2','1',NULL,'100010','910891'),('中原文化研究','CN41-1426/C','2017','4','12','3','1',NULL,'100003','923731'),('财经界','11-4098/F','2017','3','7','2','1',NULL,'100003','931540');
/*!40000 ALTER TABLE `borrow` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-06-01 11:17:43
