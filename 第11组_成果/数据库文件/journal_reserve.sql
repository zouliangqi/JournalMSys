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
-- Table structure for table `reserve`
--

DROP TABLE IF EXISTS `reserve`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `reserve` (
  `bookname` char(45) NOT NULL,
  `kanhao` char(45) NOT NULL,
  `year` char(4) DEFAULT NULL,
  `reel` char(4) DEFAULT NULL,
  `season` char(4) DEFAULT NULL,
  `name` char(45) DEFAULT NULL,
  `bdate` datetime(6) DEFAULT NULL,
  `id` char(45) NOT NULL,
  `bamount` char(4) NOT NULL,
  `reservenum` double NOT NULL,
  PRIMARY KEY (`kanhao`,`id`,`bookname`,`reservenum`),
  KEY `id_idx` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `reserve`
--

LOCK TABLES `reserve` WRITE;
/*!40000 ALTER TABLE `reserve` DISABLE KEYS */;
INSERT INTO `reserve` VALUES ('国家安全通讯','11-2348/D','1905',NULL,'5','李沐','2017-09-15 00:00:00.000000','100006','',0),('财经界','11-4098/F','1905',NULL,'6','张沐','2017-09-16 00:00:00.000000','100007','',0),('散文','12-1032/G4','1905',NULL,'4','高丽','2017-09-13 00:00:00.000000','100004','',0),('散文','12-1032/G4','2017','5','12',NULL,NULL,'100010','0',444922),('散文','12-1032/G4','2017','5','12',NULL,NULL,'100010','2',640684),('探索与求是','13-1021/C','1905',NULL,'2','章中','2017-09-14 00:00:00.000000','100005','',0),('意林','22-1361/1','1905',NULL,'1','张三','2017-09-10 00:00:00.000000','100001','',0),('儿科药学杂志','50-1156/R','1905',NULL,'4','朱成','2017-09-17 00:00:00.000000','100008','',0),('中原文化研究','CN41-1426/C','1905',NULL,'1','徐满','2017-09-18 00:00:00.000000','100009','',0),('漫客·小说绘','CN42-1810/J','1905',NULL,'2','李斯','2017-09-11 00:00:00.000000','100002','',0);
/*!40000 ALTER TABLE `reserve` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-06-01 11:17:45
